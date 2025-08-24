#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    // Disable synchronization with C I/O for faster input/output.

    cin.tie(nullptr); 
    // Untie cin from cout to avoid flushing cout every time cin is used.

    int t; 
    cin >> t; // Number of test cases

    while (t--) {
        int n; 
        cin >> n; // Length of sequence b[]

        vector<long long> b(n), a; 
        // b[] is the given sequence
        // a[] will be the constructed sequence

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // Always include the first element in a[]
        a.push_back(b[0]); 

        // Process the rest of the sequence
        for (int i = 1; i < n; i++) {
            if (b[i] >= b[i - 1]) {
                // If the current element is greater or equal to the previous one,
                // we just push it directly.
                a.push_back(b[i]);
            } else {
                // If the sequence decreases, we insert an extra "1"
                // before pushing b[i].
                a.push_back(1);     
                a.push_back(b[i]); 
            }
        }

        // Output results
        cout << a.size() << "\n";   // Length of new sequence
        for (auto x : a) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
