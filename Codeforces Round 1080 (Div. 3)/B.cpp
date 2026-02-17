#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortarray(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

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
            cin >> arr[i];
        vector<int> store = arr;
        store = sortarray(store);
        int i = 0;

        while (i < (n / 2))
        {
            cout<<arr[i]<<" "<<arr[i+2]<<endl;
            if (arr[i] < arr[i+2])
            {
                
                swap(arr[i], arr[i+2]);
            }
            i++;
        }

        if (arr == store)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}