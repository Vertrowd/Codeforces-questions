#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
 
    vector<int> arr1(n1), arr2(n2);
    vector<int> res(n1 + n2);
 
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
 
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
 
    int index1 = 0, index2 = 0, count = 0;
 
    while (index1 < n1 && index2 < n2)
    {
        if (arr1[index1] <= arr2[index2])
        {
            res[count++] = arr1[index1++];
        }
        else
        {
            res[count++] = arr2[index2++];
        }
    }
 
    
    while (index1 < n1)
    {
        res[count++] = arr1[index1++];
    }
 
    
    while (index2 < n2)
    {
        res[count++] = arr2[index2++];
    }
 
    for (int i = 0; i < n1 + n2; i++)
        cout << res[i] << " ";
 
    return 0;
}