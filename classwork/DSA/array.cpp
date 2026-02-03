#include <iostream>
using namespace std;
int main()

{
    int arr[6]={5,8,20,9,16,8};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
    return 0;
}