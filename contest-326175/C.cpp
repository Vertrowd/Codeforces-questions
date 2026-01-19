#include <iostream>
using namespace std;
int main()
{
    char x;
    int n;
    cin >> x;
    n = x;

    if (n < 122)
    {
        x = n + 1;
        cout << x;
    }
    else if (n>=122)
    {
        x=n-25;
        cout<<x;
    }
    

    return 0;
}