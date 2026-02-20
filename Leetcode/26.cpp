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
    
    vector <int> res;
    
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (count==1)
        {
            res.push_back(arr[i]);
        }
        
        
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}