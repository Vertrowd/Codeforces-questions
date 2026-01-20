#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
            count++;
        }
    }
    if (count==0)
    {
        cout<<-1;
    }
    

    return 0;
}
    