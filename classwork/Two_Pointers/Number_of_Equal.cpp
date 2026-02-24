#include <iostream>
#include <vector>

using namespace std;

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    vector<int> res;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

int i = 0, j = 0;
long long count = 0;

while (i < n1 && j < n2)
{
    if (arr1[i] == arr2[j])
    {
        int val = arr1[i];
        long long c1 = 0, c2 = 0;

        while (i < n1 && arr1[i] == val)
        {
            c1++;
            i++;
        }

        while (j < n2 && arr2[j] == val)
        {
            c2++;
            j++;
        }

        count += c1 * c2;
    }
    else if (arr1[i] < arr2[j])
        i++;
    else
        j++;
}

cout << count;

    return 0;
}


