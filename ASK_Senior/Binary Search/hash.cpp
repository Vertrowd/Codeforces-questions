#include <iostream>
#include <chrono>
#include <vector>
#include <limits>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n = 100000;
    vector<int> arr(n);

    int m;
    cin >> m;

    vector<int> v(m);

    for (int i = 0; i < m; i++) {
        cin >> v[i];
        arr[v[i]]++;
    }
    cout<<arr[1];
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}