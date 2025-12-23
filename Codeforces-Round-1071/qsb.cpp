#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        long long original_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            original_sum += abs(a[i + 1] - a[i]);
        }
        
        long long max_reduction = 0;
        
        
        max_reduction = max(max_reduction, (long long)abs(a[1] - a[0]));
        
        
        max_reduction = max(max_reduction, (long long)abs(a[n - 1] - a[n - 2]));
        
        
        for (int k = 1; k < n - 1; k++) {
            long long old_part = abs(a[k] - a[k - 1]) + abs(a[k + 1] - a[k]);
            long long new_part = abs(a[k + 1] - a[k - 1]);
            long long reduction = old_part - new_part;
            max_reduction = max(max_reduction, reduction);
        }
        
        long long result = original_sum - max_reduction;
        cout << result << "\n";
    }
    
    return 0;
}