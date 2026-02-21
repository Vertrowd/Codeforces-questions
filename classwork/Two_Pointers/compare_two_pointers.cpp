#include <iostream>
#include <vector>
using namespace std;

int main()
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

    int index, count;
    index = 0;
    count = 0;

    for (int i = 0; i < n2; i++)
    {
        for (int j = index; j < n1; j++)
        {
            if (arr2[i] > arr1[j])
            {
                index++;
                count++;
            }
            else
            {
                break;
            }
        }
        res.push_back(count);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}