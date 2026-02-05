#include <iostream>
using namespace std;

int main()
{
    int n, w, h;
    cin >> n;
    while (n--)
    {
        cin >> w >> h;

        if (w == h)
        {
            cout << "Square" <<endl;
        }
        else
        {
            cout << "Rectangle"<<endl;
        }
    }

    return 0;
}