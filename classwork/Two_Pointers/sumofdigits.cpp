#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
bool single(int n){
    if (n==0 || n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7 || n==8 || n==9)
    {
        return true;
    }
    else{
        return false;
    }
    
}
int digitsum(int n)
{
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    int count=0;
    
    if (n<=9)
    {
        cout<<count;
    }
    else{
        count=1;
        int k=digitsum(n);
        while (!(k<=9))
        {
            cout<<k<<endl;
            
            k=digitsum(k);
            count++;
        }
        cout<<k;
        
    }
    
    
    
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}