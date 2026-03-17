#include <iostream>
#include <vector>
#include <chrono>
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

    int count=0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }
        
    }    
    int left=0;
    int right=k;
    while (right<=n)
    {
        cout<<count<<" ";
        if (arr[left]%2==0)
        {
            count--;
        }
        if (arr[right]%2==0)
        {
            count++;
        }
        left++;
        right++;
        

        
    }
    

    
    

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}