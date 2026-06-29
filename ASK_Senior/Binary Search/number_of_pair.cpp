#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    long long count = 0; // Use long long to avoid overflow
    
    for (int i = 0; i < n - 1; i++) {
        // For each element arr[i], find valid j > i where arr[i] + arr[j] is in [l, r]
        
        // Find first index where sum >= l
        int low = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]) - arr.begin();
        
        // Find last index where sum <= r
        int high = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]) - arr.begin() - 1;
        
        if (high >= low) {
            count += (high - low + 1);
        }
    }
    
    cout << count << "\n";
    
    return 0;
}