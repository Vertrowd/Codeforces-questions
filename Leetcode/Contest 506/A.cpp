#include <bits/stdc++.h>
using namespace std;
bool check_digit(int n){
    int sum =0;
    int square_sum=0;
    int digit;
    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        square_sum+=digit*digit;
        n/=10;
    }
    int diff=square_sum-sum;
    if (diff>=50)
    {
        return true;
    }else{
        return false;
    }
    

    

}
int main(){
    cout<<check_digit(19);
    return 0;
}