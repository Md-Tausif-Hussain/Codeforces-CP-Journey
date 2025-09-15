#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            // Case 1: x is not 1 → always possible using n ones
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        } else {
            // Case 2: x == 1
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                // No way to form n (either no numbers at all, or only 2's with odd n)
                cout << "NO\n";
            } else {
                cout << "YES\n";
                if (n % 2 == 0) {
                    // Even n → fill completely with 2's
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++) cout << 2 << " ";
                    cout << "\n";
                } else {
                    // Odd n → use one 3 + rest 2's (works only if k >= 3)
                    cout << (n - 3) / 2 + 1 << "\n";
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}

/*
----------------------------------------
📌 Problem: Codeforces A. Forbidden Integer
----------------------------------------
You are given n, k, x:
- Available numbers: 1 to k (except x).
- Can we form n using unlimited copies of available numbers?

Approach:
- If x != 1 → always YES (use n ones).
- If x == 1:
  - If k == 1 → NO (no numbers available).
  - If k == 2 and n is odd → NO (only 2's cannot form odd).
  - Else:
    - If n is even → fill with 2's.
    - If n is odd → one 3 + rest 2's.

----------------------------------------
⏱️ Time Complexity:
- O(n) per test case (for printing numbers).
- With n ≤ 100 and t ≤ 100 → at most 10,000 operations.
- Negligible → very efficient.

💾 Space Complexity:
- O(1), only a few integers stored.
- Output is streamed directly, no extra memory used.

----------------------------------------
*/
