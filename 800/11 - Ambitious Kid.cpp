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

    int N;
    if (!(cin >> N)) return 0; // read number of integers

    long long ans = LLONG_MAX; // initialize answer with very large value

    for (int i = 0; i < N; ++i) {
        long long x; 
        cin >> x;
        // Track the minimum absolute value seen so far
        ans = min(ans, llabs(x));
    }

    // The result is the smallest absolute value among the given numbers
    cout << ans << '\n';
    return 0;
}
