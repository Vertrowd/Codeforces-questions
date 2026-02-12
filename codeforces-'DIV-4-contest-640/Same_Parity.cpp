#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int rem_even=n-(k-1)*2;
        int rem_odd=n-(k-1);
        if (rem_even%2==0 &&  rem_even>0)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < k-1; i++)
            {
                cout<<2<<" ";
            }
            cout<<rem_even<<endl;
            
        }
        else if (rem_odd%2!=0 &&  rem_odd>0)
        {
            cout<<"YES"<<endl;
             for (int i = 0; i < k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<rem_odd<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}

