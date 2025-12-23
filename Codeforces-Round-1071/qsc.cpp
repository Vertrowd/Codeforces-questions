#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long m = *min_element(a.begin(), a.end());
        long long min_diff = 1e18;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > m) {
                min_diff = min(min_diff, a[i] - m);
            }
        }
        
        long long ans;
        if (min_diff > m) {
            ans = min_diff;
        } else {
            ans = m;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}