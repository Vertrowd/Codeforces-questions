#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int min=arr[0]-0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]-i)<min)
        {
            cout<<arr[i]-i<<" ";
            min=arr[i]-i;
        }
        
    }
    // int res=*min_element(arr+0,arr+n);
    cout<<endl<<min;    
    return 0;
}