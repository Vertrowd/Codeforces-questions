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
        int i=1;
        int j=1;
        bool flag=false;
        while (i<=j)
        {
            if (((i*i*i) + (j*j*j))<n)
            {
                j++;
            }
            else if (((i*i*i) + (j*j*j))==n)
            {
                cout<<"YES"<<"\n";
                flag=true;
                break;
            }
            else{
                i++;
                j--;
            }
            
            
        }
        if (flag==false)
        {
            cout<<"NO"<<"\n";
        }
        

    }
    
    return 0;
}