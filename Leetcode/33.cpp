#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n,tar;

    cin>>n>>tar;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    int new_tar;
    while (i<=j)
    {
        int mid = (i+j)>>1;
        if (arr[mid]==tar)
        {
            /* code */
        }
        
        if (arr[mid-1]<=tar && arr[mid+1]>=tar)
        {
            if (arr[mid]==tar)
            {
                cout<<"yes";
                break;
            }
            else{
                cout<<"no";
            }
            
        }
        if (mid%2==0)
        {
            if (mid+1<n) mid++;
            else mid--;
            
        }
        
        
    }

    while (i<=j)
    {
        int mid = (i+j)>>1;
        if (arr[mid-1]<=new_tar && arr[mid+1]>=new_tar)
        {
            if (arr[mid]==tar)
            {
                cout<<"yes";
                break;
            }
            else{
                cout<<"no";
            }
            
        }
        if (mid%2==0)
        {
            if (mid+1<n) mid++;
            else mid--;
            
        }
        
        
    }
    


auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}