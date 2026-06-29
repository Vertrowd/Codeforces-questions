#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n1,n2;
    cin>>n1>>n2;
    vector <int> arr1(n1);
    vector <int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n2; i++)
    {
        int tar=arr2[i];
        int l=0,r=n1-1;
        int ans=0;
        while (l<=r)
        {
            int mid=(l+r)>>1;

            
            if (arr1[mid]<=tar)
            {
                ans=mid+1;
                l=mid+1;
            }
            else{
               r=mid-1;
            }
            
        }
        cout<<ans<<"\n";
        
    }

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}