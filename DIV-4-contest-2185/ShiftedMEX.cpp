#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int find_mex(vector<int>& arr) {
    int n = arr.size();
    vector<bool> present(n + 5, false);
    for (int val : arr) {
        if (val >= 0 && val < n + 5) {
            present[val] = true;
        }
    }
    for (int i = 0; i < n + 5; i++) {
        if (!present[i]) return i;
    }
    return n + 5;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        unordered_set<int> shifts;
        for (int val : a) {
            shifts.insert(-val);
        }
        
        int best_mex = 0;
        
        // Try each distinct shift
        for (int x : shifts) {
            vector<int> shifted(n);
            for (int i = 0; i < n; i++) {
                shifted[i] = a[i] + x;
            }
            int mex = find_mex(shifted);
            if (mex > best_mex) {
                best_mex = mex;
            }
        }
        
        cout << best_mex << "\n";
    }
    
    return 0;
}