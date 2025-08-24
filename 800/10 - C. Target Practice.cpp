#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    // Disable synchronization between C++ iostreams (cin/cout) and C I/O (scanf/printf).
    // This makes cin/cout much faster, which is very useful for large input/output.

    cin.tie(nullptr); 
    // Untie cin from cout. 
    // By default, cin flushes cout before reading input — this slows things down.
    // Setting cin.tie(nullptr) avoids unnecessary flushing, improving performance.

    int t; 
    if (!(cin >> t)) return 0; // read number of test cases safely
    while (t--) {
        long long ans = 0; // total score for this test case

        // The board is always 10x10
        for (int i = 0; i < 10; ++i) {
            string s; 
            cin >> s; // read each row of the grid
            for (int j = 0; j < 10; ++j) {
                if (s[j] == 'X') {
                    /*
                     * Scoring rule:
                     * - The closer the 'X' is to the center, the higher the score.
                     * - "ring" is calculated as the minimum distance from cell (i,j) to the border.
                     *   Formula: 1 + min( min(i, j), min(9 - i, 9 - j) )
                     *   → 1 for outermost ring, up to 5 for the center.
                     */
                    int ring = 1 + min(min(i, j), min(9 - i, 9 - j));
                    ans += ring; // add score for this 'X'
                }
            }
        }
        cout << ans << "\n"; // print total score
    }
    return 0;
}
