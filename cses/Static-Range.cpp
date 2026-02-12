#include <iostream>
#include <vector>
#define int long long
using namespace std;

int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    int a, b;
    while (q--)
    {
        cin >> a >> b;
        a--;
        b--;
        if (a == 0)
            cout << pre[b] << endl;
        else
            cout << pre[b] - pre[a - 1] << endl;
    }

    return 0;
}