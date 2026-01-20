#include <iostream>
using namespace std;
int main(){
    long long a,b,x;
    cin>>a>>b>>x;
    int count=0;
    for (size_t i = a; i < b; i++)
    {
        if (i==x)
        {
            count++;
            break;
        }
        
    }
    if (count==1)
    {
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    
    return 0;
}