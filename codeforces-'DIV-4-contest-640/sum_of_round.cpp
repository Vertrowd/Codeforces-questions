#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        
        vector <int> arr;
        while (n)
        {
            int digit = n%10;
            if (digit!=0){
                int result = digit * floor(pow(10, count));
                arr.push_back(result);
                
            }
            count++;
            n/=10;
            
        }
        cout<<arr.size()<<endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}