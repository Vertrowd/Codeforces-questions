#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mx=INT32_MIN;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            int sum=0;
            for (int j = s; j <= e; j++)
            {
                sum+=arr[j];
            }
            mx=max(mx,sum);
            
        }
        
    }
    cout<<mx;
    

    return 0;
}