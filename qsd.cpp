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
        int m = 2 * n;
        vector<int> p;
        
       
        p.push_back(m - 1);
        
       
        if (n > 1) {
            p.push_back(1);
            p.push_back(0);
        }
        
        
        for (int i = 2; i < m - 1; i++) {
            p.push_back(i);
        }
        
        
        if (n == 1) {
            p.push_back(0);
        }
        
        
        for (int i = 0; i < m; i++) {
            cout << p[i] << " \n"[i == m - 1];
        }
    }
    return 0;
}