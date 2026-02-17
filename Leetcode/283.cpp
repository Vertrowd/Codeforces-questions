#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[6] = {1, 0, 3, 0, 7, 0};
    int res[6];
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != 0)
        {
            res[count] = arr[i];

            count++;
        }
    }
    for (int i = count; i < 6; i++)
    {
        res[i] = 0;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << res[i] << " ";
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}
