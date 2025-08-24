#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; // number of test cases
    
    while (t--) {
        long long n;
        cin >> n; // the given integer for this test case

        /*
         * Game logic:
         * - If n is divisible by 3 (n % 3 == 0), then the "Second" player wins.
         * - Otherwise, the "First" player wins.
         * 
         * This comes from the problem's rule:
         *   - First player always starts.
         *   - If n % 3 == 0, then the second player has a winning strategy.
         *   - Otherwise, the first player has a winning strategy.
         */
        if (n % 3 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }

    return 0;
}
