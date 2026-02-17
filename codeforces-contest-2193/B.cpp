#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (p[i] != n - i) {  
                for (int j = i; j < n; j++) {
                    if (p[j] == n - i) {
                        reverse(p.begin() + i, p.begin() + j + 1);
                        break;
                    }
                }
                break;                  
            }
        }
        
        for (int x : p) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}