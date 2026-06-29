#include <iostream>
#include <vector>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n1,n2;
    cin>>n1>>n2;
    vector <int> arr1(n1);
    vector <int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n2; i++)
    {
        int tar=arr2[i];
        int l=0,r=n1-1;
        bool found=false;
        while (l<=r)
        {
            int mid=(l+r)>>1;
            if (arr1[mid]==tar)
            {
                found=true;
                break;
            }
            else if (arr1[mid]<tar)
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
        }
        if (found)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}