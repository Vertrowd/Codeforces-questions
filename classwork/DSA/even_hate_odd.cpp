#include <iostream>
#include <vector>

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
        if (n % 2 == 0)
        {
            int count1 = 0;
            int count2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
            if (count2>count1)
            {
                int ans=(n/2)-count1;
                cout<<ans<< '\n';
            }
            else if (count1>count2)
            {
                int ans=(n/2)-count2;
                cout<<ans<< '\n';
            }
            else{
                cout<<0<< '\n';
            }
            
            
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}