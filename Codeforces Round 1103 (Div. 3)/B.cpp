#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i = 0; i < n-k; i++)
        {
            if (s.at(i)=='1' && s.at(i+k)=='1')
            {
                s.at(i)='0';
                s.at(i+k)='0';
            }
            
        }
        if (s== string(s.size(),'0'))
        {
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        

    }
    
    return 0;
}