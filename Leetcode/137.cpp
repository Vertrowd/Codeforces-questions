#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (int i = 0; i < 32; i++)
    {
        int setbit=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]&(1<<i))
            {
                setbit++;
            }
            
        }
        if (setbit%3==1)
        {
            ans+=(1<<i);
        }
        
        
    }
    cout<<ans;
    
    
    

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}