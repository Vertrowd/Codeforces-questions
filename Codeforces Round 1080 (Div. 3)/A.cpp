#include <iostream>
#include <vector>
using namespace std;

int main() {
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
        int count2=0;
        for (int i = 0; i < n; i++)
        {
        
            if (arr[i]==67)
            {
                count2++;
            }
            
            
        }
        if (count2>=1)
        {
            cout<<"YES"<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }
        
        

        
    }
    

    return 0;
}