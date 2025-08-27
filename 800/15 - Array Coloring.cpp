#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Makes input/output faster
    cin.tie(nullptr);            // Unties cin from cout for efficiency

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        vector<int> a(n);
        int sum = 0; // To store the total sum of elements

        // Read array and calculate sum
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        // Key logic:
        // If total sum is even, we can split into two non-empty groups 
        // with the same parity of sums. Otherwise, it's impossible.
        if (sum % 2 == 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0; // End of program
}
