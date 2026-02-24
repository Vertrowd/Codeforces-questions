#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>
using namespace std;
using namespace std::chrono;
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


ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
vector <int> nums(n);
for (int i = 0; i < n; i++)
{
    cin>>nums[i];
}
vector <int> res(n);
int i = 0;
int j = nums.size() - 1;
int k=nums.size()-1;
while (k>=0)        
{
    if (abs(nums[i])>abs(nums[j]))
    {
        res[k]=nums[i];
        i++;
    }else{
        res[k]=nums[j];
        j--;
    }
    k--;
    
    
}

for (int i = 0; i < n; i++)
{
    res[i]=res[i]*res[i];
    cout<<res[i]<<" ";
}

    return 0;
}