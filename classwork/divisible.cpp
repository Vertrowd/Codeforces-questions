#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            if (n % 7 == 0)
            {
                cout << "Fizz Buzz fizz1";
            }
            else
            {
                cout << "Fizz Buzz";
            }
        }
        else if (n % 7 == 0)
        {
            if (n % 5 == 0)
            {
                cout << "Fizz Buzz fizz1";
            }
            else
            {
                cout << "Fizz fizz1";
            }
        }
        else
        {
            cout << "Fizz";
        }
    }
    else if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            if (n % 7 == 0)
            {
                cout << "Buzz Fizz fizz1";
            }
            else
            {
                cout << "Buzz Fizz";
            }
        }
        else
        {
            cout << "Buzz";
        }
    }
    else if (n % 7 == 0)
    {
        if (n % 3 == 0)
        {
            if (n % 5 == 0)
            {
                cout << "fizz1 Fizz Buzz";
            }
            else
            {
                cout << "Fizz1 Fizz";
            }
        }
        else
        {
            cout << "fizz1";
        }
    }

    return 0;
}