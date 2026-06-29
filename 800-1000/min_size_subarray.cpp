#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,x;    
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto start=high_resolution_clock::now();
    int sum=0;
    int mn_size=n+1;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        while(sum>=x){
            mn_size=min(mn_size,i+1);
            sum-=arr[i+1-mn_size];
        }
    }
    cout<<mn_size;
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}