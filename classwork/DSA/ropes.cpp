#include <iostream>
#include <chrono>
#include <climits>
#include <vector>
using namespace std;
using namespace std::chrono;

int check(int mid, vector <int> & v){
    int count=0;
    for (int i = 0; i < v.size(); i++)
    {
        
        count+=v[i]/mid;
    }
    return count;
}

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    int k;
    cin>>n>>k;
    vector <int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    while ()
    {
        /* code */
    }
    


auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}