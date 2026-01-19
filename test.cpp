#include <bits/stdc++.h>
using namespace std;

vector<int> sacred(int n) {
    if (n == 0) return {0};
    vector<int> prev = sacred(n - 1);
    int offset = 1 << (n - 1);
    vector<int> res;
    // First half: add offset to prev
    for (int x : prev) res.push_back(x ^ offset); // XOR with offset
    // Second half: keep prev
    for (int x : prev) res.push_back(x);
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans = sacred(n);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}
