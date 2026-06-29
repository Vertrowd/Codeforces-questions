#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;
vector<int> sortarray(vector<int> arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    return arr;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,k;

    cin>>n>>k;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // sortarray(arr);
    // int mid=n/2;
    // int count=0;
    // int index=-1;
    // if (k<arr[mid])
    // {
    //     for (int i = 0; i <= mid; i++)
    //     {
    //         if (arr[i]==k)
    //         {
    //             count++;
    //             index=i;
    //             break;
    //         }
            
    //     }
        
    // }
    // else if (k>arr[mid])
    // {
    //     for (int i = mid; i <n; i++)
    //     {
    //         if (arr[i]==k)
    //         {
    //             count++;
    //             index=i;
    //             break;
    //         }
            
    //     }
        
    // }
    // else if (arr[mid]==k)
    // {
    //     index=mid;
    //     count++;
    // }

    // if (count>0)
    // {
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }
    // int i=0,j=n-1;
    // int ans=-1;
    // while (i<=j)
    // {
    //     int mid=(i+j) >> 1;
    //     if (arr[mid]==k)
    //     {
    //         ans=mid;
    //         j=mid-1;
    //     }
    //     else if (arr[mid]<k)
    //     {
    //         i=mid+1;

    //     }
    //     else{
    //         j=mid-1;
    //     }
    // }

    
    return 0;
}