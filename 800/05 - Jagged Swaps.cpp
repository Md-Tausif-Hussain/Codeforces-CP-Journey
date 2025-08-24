#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases
    
    while (t--)
    {
        long long n;
        cin >> n; // size of the array

        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i]; // input array elements

        /*
         * Problem logic:
         * You are allowed to perform "jagged swaps" to try and sort the array.
         * After analyzing the rules, the key observation is:
         * - If the first element is 1, then the answer is "YES"
         *   (because you can always perform swaps to make the array sorted).
         * - Otherwise, if the first element > 1, the answer is "NO".
         *   (because it's impossible to push a smaller value in front).
         */
        if (a[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
