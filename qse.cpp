#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        vector<ll> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        ll needA = 0, needB = 0;
        ll count0 = 0, count1 = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                count0++;
                if (p[i] % 2 == 0) {
                    needA += p[i]/2 + 1;
                    needB += p[i]/2 - 1;
                } else {
                    needA += (p[i]+1)/2;
                    needB += (p[i]-1)/2;
                }
            } else {
                count1++;
                if (p[i] % 2 == 0) {
                    needA += p[i]/2 - 1;
                    needB += p[i]/2 + 1;
                } else {
                    needA += (p[i]-1)/2;
                    needB += (p[i]+1)/2;
                }
            }
        }
        
        if (x < needA || y < needB) {
            cout << "NO\n";
            continue;
        }
        
        ll diff = (x - needA) - (y - needB);
        if (-count1 <= diff && diff <= count0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}