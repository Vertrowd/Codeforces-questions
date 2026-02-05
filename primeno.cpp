#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;


    for (int i = 2; i <= n; i++)
    {
        int count=0;
        for (int j = 2; j <= n; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        if (count==1)
        {
            cout<<i<<" ";
        }
        
        
    }
    
    // while (n>0)
    // {
    //     int count = 0;

    //     for (long i = 2; i * i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             // cout << "the no. is not prime";
    //             count++;
    //         }
    //     }
    //     if (count == 0)
    //     {
    //         cout <<n<< " is prime"<<endl;
    //     }
    //     n--;
    // }
    return 0;
}