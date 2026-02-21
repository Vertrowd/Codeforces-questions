#include <iostream>
#include <vector>
using namespace std;


int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,S;
    cin>>n>>S;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int store=0;
    for (int start = 0; start < n; start++)
        {
            
            for (int e = start; e < n; e++)
            {
                int count=0;
                
                int sum=0;
                for (int j = start; j <= e; j++)
                {
                    sum+=arr[j];
                    if (sum<=S)
                    {

                        count++;
                    }
                    else{
                        break;
                    }
                    
                    
                }
                if (store<count)
                {
                    store=count;
                }
                
                
            }
            
        }
    cout << store;
    
    

    return 0;
}