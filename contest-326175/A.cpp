#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x,y,ans;
    cin>>x>>y;
    ans=(y*100)/(100-x);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}