#include <iostream>
#include <chrono>
#include <vector>
#include <cmath>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,k;
    cin>>n>>k;

    vector <int> arr(n);
    int mx=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }    
    int left=0;
    int right=k;

    while (right<=n)
    {
        
        cout<<sum<<" ";
        mx=max(mx,sum);
        sum+=arr[right];
        sum+=-arr[left];
        
        right++;
        left++;
        
    }
    cout<<endl<<mx;
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}