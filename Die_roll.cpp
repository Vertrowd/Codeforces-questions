#include <iostream>
#include <numeric> 
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int mx=max(a,b);
    int num=6-mx+1;
    int den = 6;

    int g = gcd(num, den);

    num /= g;
    den /= g;

    cout << num << "/" << den;

    return 0;
}