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
        int n, k;
        cin >> n >> k; // n = size of array, k = required value

        vector<int> a(n);
        bool found = false; // flag to check if k exists in array

        // read array and check if any element equals k
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) found = true; // mark found if k is present
        }

        /*
         * Problem logic:
         * - We need to check if the number k exists in the array.
         * - If yes → output "YES".
         * - Otherwise → output "NO".
         */
        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
