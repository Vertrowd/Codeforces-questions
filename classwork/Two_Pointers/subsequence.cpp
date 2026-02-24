#include <iostream>
#include <vector>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    // int index=0;
    
    int count=0;
    // for (int i = 0; i < n2; i++)
    // {
    //     while (index<n1)
    //     {
    //         if (arr2[i]==arr1[index])
    //         {
    //             count++;
    //             break;
    //         }
    //         index++;
            
    //     }
        
    // }
    int index1=0,index2=0;
    while (index1<n1 && index2<n2)
    {
        if (arr2[index2]==arr1[index1])
        {
            count++;
            index2++;
            
        }
        index1++;
        
    }
    
    if (count==arr2.size())
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    

    return 0;
}
