#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }

    int mx=sum;
    int left=k-1;
    int right =n-1;
    while (left>=0 && right>=k)
    {
        sum+=arr[right]-arr[left];
        mx=max(sum,mx);
        right--;
        left--;
    }
    cout<<mx;
    
    

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}