# Algorithms & Data Structures

C++ solutions and implementations covering **competitive programming** and **core data structures**.

These are individual learning examples. Each link points to an existing source file.

## Competitive programming

### USACO Bronze

| Problem | Technique | File |
| --- | --- | --- |
| Cow Gymnastics | Record rankings and check pairwise consistency across sessions | [cow_gymnastics.cpp](usaco-bronze/cow_gymnastics.cpp) |
| Diamond Collector | Count diamond sizes within a valid range | [diamond_collector.cpp](usaco-bronze/diamond_collector.cpp) |

**Cow Gymnastics:** Ranking positions are stored for each cow in every session, then ordered pairs are checked. For `N` cows and `K` sessions, the implementation uses **O(N²K) time** and **O(NK) space**.

**Diamond Collector:** The implementation tests each diamond's size as a possible lower bound and counts diamonds within the allowed difference. It uses **O(N²) time** and **O(N) auxiliary space**.

### CSES

| Problem | Technique | File |
| --- | --- | --- |
| Weird Algorithm | Simulate an integer sequence using conditional updates | [weird_algorithm.cpp](cses/weird_algorithm.cpp) |

The sequence uses a 64-bit integer (`long long`). Its runtime depends on the number of generated terms.

## University DSA

| Example | Operations | File |
| --- | --- | --- |
| Array-Based Stack | `push`, `pop`, `peek`, `display`, capacity checks | [stack_array.cpp](university-dsa/stack_array.cpp) |

The stack uses a fixed array of 100 integers. `push`, `pop`, and `peek` take **O(1) time**; displaying the full stack takes **O(N)**. This educational version uses `-1` as an underflow return value.

## Compile and run

Run from the repository root using a C++17-compatible compiler:

```bash
g++ -std=c++17 -Wall -Wextra 01-algorithms/usaco-bronze/diamond_collector.cpp -o diamond_collector
./diamond_collector
```

Enter the input in the problem's expected format.

[← Back to repository overview](../README.md)
