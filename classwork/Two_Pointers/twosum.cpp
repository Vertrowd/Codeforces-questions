#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, tar;
    cin >> n >> tar;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ind1 = 0;
    int ind2 = n - 1;
    while (ind1 < ind2)
    {
        cout << arr[ind1] << " " << arr[ind2] << endl;
        if (arr[ind1] + arr[ind2] == tar)
        {
            cout << "YES" << '\n';
            break;
        }
        else if (arr[ind1] + arr[ind2] > tar)
        {
            ind2--;
        }
        else if (arr[ind1] + arr[ind2] < tar)
        {
            ind1++;
        }
    }
    return 0;
}