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
    cin >> t; // number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // n = length of string x, m = length of string s

        string x, s;
        cin >> x >> s; // base string x and target substring s

        int ans = -1;       // default answer (-1 means impossible)
        string cur = x;     // start with the original string x

        /*
         * Problem logic:
         * - We are allowed to "double" string x (cur = cur + cur).
         * - Each doubling counts as 1 operation.
         * - We need to check if string s appears as a substring in cur.
         * - If found, record the number of operations.
         * - Otherwise, keep doubling up to 5 times (as per constraints).
         */
        for (int ops = 0; ops <= 5; ops++) {
            // check if s is a substring of the current string
            if (cur.find(s) != string::npos) {
                ans = ops; // store the operations needed
                break;     // stop searching further
            }
            cur += cur; // double the string for next step
        }

        cout << ans << "\n"; // print result for this test case
    }
    return 0;
}
