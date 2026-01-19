#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        
        vector<long long> original(n), current(n);
        for (int i = 0; i < n; i++) {
            cin >> original[i];
            current[i] = original[i];
        }
        
        for (int i = 0; i < m; i++) {
            int b, c;
            cin >> b >> c;
            b--;
            
            current[b] += c;
            
            
            if (current[b] > h) {
                
                for (int j = 0; j < n; j++) {
                    current[j] = original[j];
                }
            }
        }
        
        
        for (int i = 0; i < n; i++) {
            cout << current[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}