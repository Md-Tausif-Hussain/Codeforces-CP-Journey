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
    if(!(cin >> t)) return 0; // read number of test cases safely
    while (t--) {
        int n; 
        cin >> n; // number of matches (or scores)

        long long s = 0; // sum of all but last goals
        for (int i = 0; i < n - 1; ++i) {
            long long x; 
            cin >> x;
            s += x; // accumulate given goals
        }

        /*
         * Problem statement:
         * - We are given n-1 numbers (scores/goals).
         * - The missing last number is chosen so that the total sum becomes 0.
         * - So the answer is simply the negative of the sum of the given n-1 numbers.
         */
        cout << -s << "\n";
    }
    return 0;
}
