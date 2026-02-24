#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int j = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != '#')
        {
            s1[j] = s1[i];
            j++;
        }
        else
        {
            if (j > 0)
            {
                j--;
            }
        }
    }
    int k = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != '#')
        {
            s2[k] = s2[i];
            k++;
        }
        else
        {
            if (k > 0)
            {
                k--;
            }
        }
    }

    if (j != k)
    {
        cout << "false";
    }
    else
    {
        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            if (s1[i] != s2[i])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "true" : "false") << '\n';
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << '\n'
         << "Time taken " << duration.count() << " ms";
    return 0;
}