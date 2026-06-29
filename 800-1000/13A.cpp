#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int base(int n,int b){
    vector <int> v;
    while (n)
    {
        v.push_back(n%b);
        n/=b;
    }
    int sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
    }
    return sum;
    
    
    
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i = 2; i < n; i++)
    {
        sum+=base(n,i);
    }
    int denominator=n-2;
    int hcf=gcd(sum,denominator);
    cout<<sum/hcf<<"/"<<denominator/hcf;
    



    return 0;

}