#include <bits/stdc++.h>
#define int long long
using namespace std;
bool checkequal(int a, int b, int c)
{
    return ((a == b) && (b == c));
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c0, c1, c2;
        c0 = c1 = c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 3 == 0)
            {
                c0++;
            }
            else if (arr[i] % 3 == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }

        int count = 0;
        int target = n / 3;
        while (c0 != target || c1 != target || c2 != target)
        {
            int digit;
            if (c1 > c0 && c1 > c2)
            {
                digit = 1;
            }
            else if (c2 > c1 && c2 > c0)
            {
                digit = 2;
            }
            else
            {
                digit = 0;
            }

            int x;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 3 == digit)
                {
                    arr[i] += 1;
                    x = arr[i] % 3;
                    break;
                }
            }
            if (digit == 0)
            {
                c0--;
            }
            else if (digit == 1)
            {
                c1--;
            }
            else
            {
                c2--;
            }

            if (0 == x)
            {
                c0++;
            }
            else if (1 == x)
            {
                c1++;
            }
            else
            {
                c2++;
            }

            count++;
        }
        cout << count << "\n";
    }
    return 0;
}