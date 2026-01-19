#include <iostream>
#include <vector>
using namespace std;

int main()
{
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
        int mx = arr[0]; 
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
        }
        int temp=mx;
        for (size_t i = 0; i < n-1; i++)
        {
            mx=mx+temp;
        }
        cout<<mx<<"\n";
        
    }
    return 0;
}
