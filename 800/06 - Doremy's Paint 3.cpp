#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n; 
        cin >> n; // size of the array

        unordered_map<int,int> freq; // to count frequency of each number

        // read array elements and count frequencies
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            freq[x]++;
        }

        /*
         * Problem logic:
         * - We want to check if we can paint the array such that no two adjacent elements
         *   have different "colors" (simplified into frequency conditions).
         * 
         * Cases:
         * 1) If more than 2 distinct numbers exist → impossible → "No".
         * 2) If exactly 1 distinct number → always possible → "Yes".
         * 3) If exactly 2 distinct numbers:
         *      - Let their frequencies be f1 and f2.
         *      - It's valid if:
         *          a) f1 == f2 (perfectly balanced), or
         *          b) n is odd and |f1 - f2| == 1 (almost balanced).
         *        Otherwise → "No".
         */
        if (freq.size() > 2) {
            cout << "No\n";
        } 
        else if (freq.size() == 1) {
            cout << "Yes\n";
        } 
        else {
            // get the two frequencies
            auto it = freq.begin();
            int f1 = it->second;
            int f2 = (++it)->second;

            if (f1 == f2 || (n % 2 == 1 && abs(f1 - f2) == 1)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}
