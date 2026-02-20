#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    auto start=high_resolution_clock::now();
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6]={2,4,8,10,18,21};
    int res[12];

    for (int i = 0; i < 6; i++)
    {
        res[i+6]=arr2[i];
    }
    
    int index1=0;
    int index2=0;
    int count=0;

    while (index1<6)
    {
        if (arr1[index1]<=arr2[index2])
        {
            res[count]=arr1[index1];
            index1++;
        }
        else if (arr2[index2]<arr1[index1])
        {
            res[count]=arr2[index2];
            index2++;
        }

        count++;
    }
    
    for (int i = 0; i < 12; i++)
    {
        cout<<res[i]<<" ";
    }
    
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<milliseconds>(stop-start);
    cout<<'\n'<<"Time in "<<duration.count()<<" ms";
    
    
    return 0;
}
