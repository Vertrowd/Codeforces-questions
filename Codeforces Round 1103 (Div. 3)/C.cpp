#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long x) {
    if (a < b) swap(a, b);
    long long ans = a - b; // all increments
    
    while (a > 0 && b > 0) {
        if (a % x == 0 && a / x >= b) {
            a /= x;
            ans = min(ans, (long long)1 + solve(a, b, x));
        } else {
            // Can't divide a further without going below b
            ans = min(ans, a - b); // increments only
            break;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;
        cout << solve(a, b, x) << "\n";
    }
    return 0;
}