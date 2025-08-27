#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // make cin/cout faster
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n; // length of array
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i]; // input array elements

        // Step 1: Check if array is already not sorted
        bool sorted = true;
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) { 
                // If we find a decreasing pair, array is already unsorted
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            cout << 0 << "\n"; // no operations needed
            continue;          // go to next test case
        }

        // Step 2: Array is sorted, so we need operations
        // We will compute the minimum operations needed
        long long ans = LLONG_MAX;
        for (int i = 0; i < n-1; i++) {
            long long gap = a[i+1] - a[i]; 
            // gap >= 0 because array is sorted

            // One operation reduces this gap by 2
            // So, to make a[i] > a[i+1], we need floor(gap/2) + 1 operations
            long long required = gap/2 + 1;

            ans = min(ans, required); // take the minimum over all adjacent pairs
        }

        // Step 3: Print the result
        cout << ans << "\n";
    }
}
