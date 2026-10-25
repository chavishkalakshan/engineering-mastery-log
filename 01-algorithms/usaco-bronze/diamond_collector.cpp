cat << 'EOF' > 01-algorithms/usaco-bronze/diamond_collector.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_diamonds = 0;
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] >= A[i] && A[j] <= A[i] + K) {
                count++;
            }
        }
        max_diamonds = max(max_diamonds, count);
    }

    cout << max_diamonds << "\n";
    return 0;
}
EOF