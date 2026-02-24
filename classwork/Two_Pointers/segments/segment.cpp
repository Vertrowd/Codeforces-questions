#include <iostream>
#include <vector>
#include <cmath>
#define int long long
using namespace std;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,S;
    cin>>n>>S;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int left=0;
    int mx=0;
    int sum=0;
    for (int right = 0; right < n; right++)
    {
        sum+=arr[right];
        while (sum>S)   
        {
            sum-=arr[left];
            left++;
        }
        mx=max(mx,(right-left+1));

        
    }
    cout<<mx<<endl;
    
    

    return 0;
}