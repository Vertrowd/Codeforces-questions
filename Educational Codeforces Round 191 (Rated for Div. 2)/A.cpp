//Ai development
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int sum=x+y;
        int a1=ceil((double)n/sum);   
        int a2=z+ceil((double) (n-(x*z))/(x+(y*10)) );
        if (a1<a2)
        {
            cout<<a1;
        }else{
            cout<<a2;
        }
        cout<<"\n";
        
    }
    
    return 0;
}