#include <iostream>
#include <vector>
using namespace std;
vector<int> sortarray(vector<int> arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    return arr;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    vector<int> sortedarr=sortarray(arr);
    long long sum=0;

    for (int i = n-1; i >=n-k; i--)
    {
        if (sortedarr[i]>0)
        {
            sum+=sortedarr[i];
        }
        
        
    }
    cout<<sum;
    
    return 0;
}