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

    ll range_sum(int l, int r) {
        if (l > r) return 0;
        return sum(r) - sum(l - 1);
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

        vector<vector<int>> ops_by_len(n + 2);
        vector<int> L(q), R(q), len(q);

        for (int i = 0; i < q; i++) {
            cin >> L[i] >> R[i];
            len[i] = R[i] - L[i] + 1;
            ops_by_len[len[i]].push_back(i);
        }

        vector<ll> final_ans(n + 2, 0);
        vector<vector<pair<int, int>>> ops_at_l(n + 2);
        for (int i = 0; i < q; i++) {
            ops_at_l[L[i]].push_back(make_pair(R[i], i));
        }

        for (int l = 1; l <= n; l++) {
            if (ops_at_l[l].empty()) continue;
            int max_r = l - 1;

            // find max r
            for (size_t j = 0; j < ops_at_l[l].size(); j++) {
                int r = ops_at_l[l][j].first;
                int idx = ops_at_l[l][j].second;
                max_r = max(max_r, r);
            }

            int max_len = max_r - l + 1;
            vector<int> cnt_len(max_len + 2, 0);

            for (size_t j = 0; j < ops_at_l[l].size(); j++) {
                int r = ops_at_l[l][j].first;
                int idx = ops_at_l[l][j].second;
                int length = r - l + 1;
                cnt_len[length]++;
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
