#include <iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    while (n>0)
    {
        int count = 0;

        for (long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                // cout << "the no. is not prime";
                count++;
            }
        }
        if (count == 0)
        {
            cout <<n<< " is prime"<<endl;
        }
        n--;
    }
    return 0;
}