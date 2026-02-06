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
    
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<min;    
    return 0;
}