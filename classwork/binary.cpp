#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string rev;
    while(n){
        int d=n%2;
        char x=d+'0';
        rev+=x;
        n/=2;
    }
    cout<<rev;
    
    return 0;

}