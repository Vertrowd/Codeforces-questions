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
    for (int i = 0; i < n; i++)
    {
        int ind1 = i + 1;
        int ind2 = n - 1;
        int rem = tar - arr[i];
        while (ind1 < ind2)
        {
            if (arr[ind1] + arr[ind2] == rem)

            {
                cout << arr[i] << " " << arr[ind1] << " " << arr[ind2] << endl;
                cout << "YES" << '\n';
                break;
            }
            else if (arr[ind1] + arr[ind2] > rem)
            {
                ind2--;
            }
            else if (arr[ind1] + arr[ind2] < rem)
            {
                ind1++;
            }
        }
    }

    return 0;
}