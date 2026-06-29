#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> index;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            index.push_back(i);
        }
    }

    for (int i = 0; i < index.size(); i++)
    {
        cout<<index[i]<<" ";
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << '\n'
         << "Time taken " << duration.count() << " ms";
    return 0;
}