#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        for (int i = l-1; i < r; i++)
        {
            ans^=arr[i];
        }
        cout<<ans<<"\n";
        
    }
    
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}