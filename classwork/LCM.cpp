#include <iostream>
using namespace std;


int main()
{

    int a, b, rem;
    
    cin >> a >> b;
    int mult=a*b;
    rem = a % b;
    int gcd;
    if (rem == 0)
    {
        gcd=b;
    }
    else
    {
        while (rem != 0)
        {
            if (a % b != 0)
            {
                a = b;
                b = rem;
                rem = a % b;
            }
        }
        gcd=b;
    }
    int lcm=mult/gcd;
    cout<<lcm;

    return 0;
}