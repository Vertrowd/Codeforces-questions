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

    // int mx=0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         int area=min(arr[i],arr[j])*(j-i);
    //         if (mx<area)
    //         {
    //             mx=area;
    //         }
            
    //     }
        
    // }
    
    

    int l=0;
    int r=n-1;
    int mx=0;
    while (l<r)
    {
        int area=min(arr[l],arr[r])*(r-l);
        if (area>mx)
        {
            mx=area;
        }
        
        if (arr[l]<arr[r])
        {
            l++;
        }else{
            r--;
        }
        
    }
    cout<<mx;
    
    

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}