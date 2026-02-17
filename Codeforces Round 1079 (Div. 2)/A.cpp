#include <iostream>
using namespace std;
int digitsum(int n)
{
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int initialvalue(int i)
{
    bool flag = true;
    int max = 100000;
    int count = 0;
    int store = i;
    while (flag && max > 0)
    {
        if (store - digitsum(store) == i)
        {
            flag = false; 
            count++;
            return store;
        }
        store++;
        max--;
    }
    if (count == 0)
    {
        return -1;
    }
}

int friendly(int n)
{
    if (initialvalue(n) == -1)
    {
        return 0;
    }
    else
    {
        int count = 0;
        int store = initialvalue(n);
        bool flag = true;
        while (flag)
        {
            if (store - digitsum(store) == n)
            {
                count++;
            }
            else
            {
                return count;
                flag = false;
            }
            store++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << friendly(n)<<'\n';

    }

    return 0;
}