#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n1,n2;
    cin>>n1>>n2;
    vector <int> arr1(n1);
    vector <int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    int 

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}