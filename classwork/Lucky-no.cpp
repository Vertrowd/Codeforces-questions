#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int count1 = 0;
        int n = i;
        while (n > 0)
        {
            count1++;
            n = n / 10;
        }
        int count2 = 0;
        n = i;
        while (n > 0)
        {
            int rem = n % 10;
            if (rem == 4 || rem == 7)
            {
                count2++;
            }

            n = n / 10;
        }
        if (count1 == count2)
        {
            cout << i << " ";
        }
    }

    return 0;
}