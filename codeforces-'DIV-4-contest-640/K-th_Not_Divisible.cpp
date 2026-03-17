#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;
#define int long long


int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans=k+((k-1)/(n-1));
        cout<<ans<<'\n';
        // int count = 0;
        // int i = 0;
        // while (count < k)
        // {

        //     i++;
        //     if (i % n != 0)
        //     {
        //         count++;
        //     }
        // }
        // cout << endl<< i;

    }

    return 0;
}