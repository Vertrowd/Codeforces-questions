#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
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

        for (int s = 0; s < n; s++)
        {
            for (int e = s; e < n; e++)
            {
                int mx = INT32_MIN;
                for (int j = s; j <= e; j++)
                {
                    mx = max(mx, arr[j]);
                }
                cout << mx << " ";
            }
            
        }
        cout << '\n';
        
    }

    return 0;
}