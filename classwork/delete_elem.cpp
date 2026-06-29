#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
    auto start=high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5]={1,2,3,0,5};
    
    vector <int> x;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]!=0)
        {
            x.push_back(arr[i]);
        }else{
            continue;
        }
        
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    
    


    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<milliseconds>(stop-start);
    cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}