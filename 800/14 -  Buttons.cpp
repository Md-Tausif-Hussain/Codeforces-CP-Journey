#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c; 
        // a = buttons only Anna can press
        // b = buttons only Katie can press
        // c = buttons that either Anna or Katie can press

        // Case 1: Anna has strictly more exclusive buttons
        if (a > b) {
            cout << "First\n"; // Anna wins directly
        } 
        // Case 2: Katie has strictly more exclusive buttons
        else if (a < b) {
            cout << "Second\n"; // Katie wins directly
        } 
        // Case 3: They have the same number of exclusive buttons
        else {
            // The winner depends on the parity of c:
            // If c is odd → Anna gets the last move → Anna wins
            // If c is even → Katie gets the last move → Katie wins
            if (c % 2 == 1) 
                cout << "First\n";
            else 
                cout << "Second\n";
        }
    }
    return 0;
}
