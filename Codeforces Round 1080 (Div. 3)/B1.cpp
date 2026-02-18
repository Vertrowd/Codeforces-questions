#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read from file
    ifstream fin("input.txt");

    auto start = chrono::high_resolution_clock::now();

    int t;
    fin >> t;

    while (t--)
    {
        int n;
        fin >> n;

        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++)
            fin >> arr[i];

        int i = 1;

        while (i <= (n / 2))
        {
            if (arr[i] > arr[2 * i])
            {
                swap(arr[i], arr[2 * i]);
                for (int j = 1; j <= i; j++)
                {
                    if (arr[j] != j)
                    {
                        i = j - 1;
                        break;
                    }
                }
            }
            i++;
        }

        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cerr << "Execution Time: " << duration.count() << " ms\n";

    return 0;
}
