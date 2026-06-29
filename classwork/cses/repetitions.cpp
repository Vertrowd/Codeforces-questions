#include <iostream>
#include <chrono>
#define int long long
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.length();
    int count=1;
    int mx=1;
    for (int i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
            mx=max(mx,count);
        }
        else{
            count=1;
            mx=max(count,mx);
        }
    }
    
    cout<<mx;
    return 0;
}