#include <iostream>
#include <chrono>
#include <vector>
#include <set>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int rows,cols;
cin>>rows>>cols;
vector<vector<int>> arr(rows, vector<int>(cols));

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin>>arr[i][j];
    }
    
}

vector <int> res;
for (int i = 0; i < n; i++)
{
    for (int j = arr[n][0]; j < arr[n][1]; j++)
    {
        res.push_back(j);
    }
}
set<int> uniqueElements;

uniqueElements.insert(arr.begin(), arr.end());



auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}