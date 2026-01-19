#include <iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    int count = 0;
    for (long i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "the no. is not prime";
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "The no. is prime";
    }
    return 0;
}