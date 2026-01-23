#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is max"<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is max"<<endl;
    }
    else if (c>b && c>a)
    {
        cout<<c<<" is max"<<endl;
    }
    
    if (a<b && a<c)
    {
        cout<<a<<" is min"<<endl;
    }
    if (b<a && b<c)
    {
        cout<<b<<" is min"<<endl;
    }
    if (c<b && c<a)
    {
        cout<<c<<" is min"<<endl;
    }
    
    return 0;
}