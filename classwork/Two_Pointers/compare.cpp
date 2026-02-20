#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int arr1[7]={1,1,2,3,4,6,8};
    int arr2[8]={2,4,5,7,9,13,21,26};
    vector <int> res;
    for (int i = 0; i < 8; i++)
    {
        int count=0;
        for (int j = 0; j < 7; j++)
        {
            if (arr2[i]>arr1[j])
            {
                count++;
            }
            else if (arr2[i]<=arr1[j])
            {
                break;
            }
            
            
        }
        res.push_back(count);
        
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}