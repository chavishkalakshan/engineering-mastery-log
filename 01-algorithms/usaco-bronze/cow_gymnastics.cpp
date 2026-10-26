#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K, N;
    if (!(cin >> K >> N)) return 0;

    // sessions[k][cow] stores the 1-based rank of the cow in session k
    vector<vector<int>> rank(K, vector<int>(N + 1));
    for (int k = 0; k < K; k++) {
        for (int i = 0; i < N; i++) {
            int cow;
            cin >> cow;
            rank[k][cow] = i; // i is the position (0 is best)
        }
    }

    int consistent_pairs = 0;

    // Check all possible pairs of cows (A, B) where A != B
    for (int a = 1; a <= N; a++) {
        for (int b = 1; b <= N; b++) {
            if (a == b) continue;

            bool consistent = true;
            for (int k = 0; k < K; k++) {
                // Check if cow 'a' ranks better (lower index) than cow 'b' in session k
                if (rank[k][a] >= rank[k][b]) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                consistent_pairs++;
            }
        }
    }

    cout << consistent_pairs << "\n";
    return 0;
}