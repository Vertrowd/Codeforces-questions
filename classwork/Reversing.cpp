#include <iostream>
#include <vector>
using namespace std;
vector<int> checkzeroposition(vector<int> &arr)
{
    vector<int> pos;
    for (int i = 0; i < arr.size(); i++)

    {
        if (arr[i] == 0)
        {
            pos.push_back(i);
        }
    }
    return pos;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> zeros = checkzeroposition(arr);
    for (int k = 0; k < zeros.size(); k++)
    {
        int r = zeros[k] - 1;
        int l = 0;
        while (l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}