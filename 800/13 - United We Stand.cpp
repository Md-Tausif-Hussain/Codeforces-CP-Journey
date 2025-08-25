#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast input/output
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the array

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i]; // Read array elements

        // Step 1: Find the minimum element in the array
        int mn = *min_element(a.begin(), a.end());

        // Step 2: Divide array into two subsequences b and c
        // b -> contains all minimum elements
        // c -> contains all elements greater than the minimum
        vector<int> b, c;
        for (int x : a) {
            if (x == mn) 
                b.push_back(x); 
            else 
                c.push_back(x);
        }

        // Step 3: If all elements are the same (c is empty), no valid partition
        if (c.empty()) {
            cout << -1 << "\n";
        } else {
            // Step 4: Print sizes of both subsequences
            cout << b.size() << " " << c.size() << "\n";

            // Print subsequence b
            for (int x : b) cout << x << " ";
            cout << "\n";

            // Print subsequence c
            for (int x : c) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
