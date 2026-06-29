#include <bits/stdc++.h>
#define int long long 
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
                cin>>arr[i];
        }
        int res=0;

        for (int i = 0; i < n-1; i++)
        {
            int mn=min(arr[i],arr[i+1]);
            int mx=max(arr[i],arr[i+1]);
            
            while (mx>2*mn)
            {
                mn*=2;
                res++;
            }
            
        }
        cout<<res<<"\n";
        
    }
    
    return 0;
}