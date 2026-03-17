#include <iostream>
#include <chrono>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#include <sstream> 
#include <string>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

    int n;
    double k;
    cin>>n>>k;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    if (arr.size()==1)
    {
        double mx=arr[0];
        cout<<fixed<<setprecision(5)<<mx;
    }
    else{
    double sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }

    double avg=sum/k;
    double mx=avg;
    int left=0;
    int right=k;
    while (right<=n)
    {
        sum+=arr[right]-arr[left];
        avg=sum/k;
        mx=max(mx,avg);
        right++;
        left++;
    }
    cout<<fixed<<setprecision(5)<<mx;
    }
    
    
    
    
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}