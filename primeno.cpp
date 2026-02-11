#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    while (n>0)
    {
        int count = 0;

        for (long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout <<n<< " is prime"<<endl;
        } else{
            cout << n<<" is not prime"<<endl;
        }
        n--;
    }
    return 0;
}