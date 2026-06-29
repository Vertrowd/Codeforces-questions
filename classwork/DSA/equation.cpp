#include <iostream>
#include <climits>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;
int check(int mid,int tar){
    double ans=mid*mid + sqrt(mid);
    return  ans<=tar;
}

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
double c;
cin>>c;
double i=1,j=1e7;
while (j-i>1e-6)
{
    double mid = (double)(i+j)/(double)2;
    if (check(mid,c))
    {
        j=mid;
    }else{
        i=mid;
    }
    
}
cout<<j;

    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}