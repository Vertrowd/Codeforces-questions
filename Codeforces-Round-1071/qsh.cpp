#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Fenwick {
    vector<ll> bit;
    int n;

    Fenwick(int n) : n(n), bit(n + 2, 0) {}

    void add(int idx, ll delta) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += delta;
    }

    ll sum(int idx) {
        ll res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res += bit[idx];
        return res;
    }

    void range_add(int l, int r, ll delta) {
        if (l > r) return;
        add(l, delta);
        add(r + 1, -delta);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> F(n + 1);
        for (int x = 1; x <= n; x++) {
            int lowbit = x & (-x);
            F[x] = 1LL * x * lowbit;
        }

        vector<int> L(q), R(q);
        vector<vector<int>> add_at(n + 2), remove_at(n + 2);
        
        for (int i = 0; i < q; i++) {
            cin >> L[i] >> R[i];
            add_at[L[i]].push_back(i);
            remove_at[R[i] + 1].push_back(i);
        }

        vector<ll> ans(n + 2, 0);
        
       
        Fenwick bit_cnt(n), bit_sum(n);
        
      
        for (int pos = 1; pos <= n; pos++) {
           
            for (int idx : add_at[pos]) {
                
            }
            
         
            for (int idx : remove_at[pos]) {
                
            }
            
           
        }
        
       
        vector<vector<pair<int, int>>> queries_by_left(n + 2);
        for (int i = 0; i < q; i++) {
            queries_by_left[L[i]].push_back({R[i], i});
        }
        
        vector<ll> final_ans(n + 2, 0);
        
       
        vector<vector<int>> updates(n + 2);
        for (int i = 0; i < q; i++) {
            int len = R[i] - L[i] + 1;
            updates[L[i]].push_back(len);
        }
        
       
        for (int l = 1; l <= n; l++) {
            if (updates[l].empty()) continue;
            
            
            int max_len = 0;
            for (int len : updates[l]) {
                max_len = max(max_len, len);
            }
            
            vector<int> cnt_len(max_len + 2, 0);
            for (int len : updates[l]) {
                cnt_len[len]++;
            }
            
            
            for (int k = max_len; k >= 1; k--) {
                cnt_len[k] += cnt_len[k + 1];
            }
            
            
            for (int k = 1; k <= max_len; k++) {
                if (cnt_len[k] > 0) {
                    int pos = l + k - 1;
                    if (pos <= n) {
                        final_ans[pos] += F[k] * cnt_len[k];
                    }
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            cout << final_ans[i] << " \n"[i == n];
        }
    }

    return 0;
}