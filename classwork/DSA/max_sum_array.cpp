#include <cmath>
#include <iostream>
#include <vector>
#define int long long

using namespace std;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int current_sum=arr[0];
    int mx=arr[0];

    for (int i = 1; i < n; i++)
    {
        current_sum=max(arr[i],current_sum+arr[i]);
        mx=max(mx,current_sum);
    }

    cout<<mx;
    
    

    return 0;
}