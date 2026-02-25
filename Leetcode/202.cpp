#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int digitsumsquare(int n)
{
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        sum = sum + digit*digit;
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
    bool flag=true;
    int k=digitsumsquare(n);
    while (flag)
    {
        cout<<k<<" ";
        if (k==1)
        {
            
            break;
        }
        else if (k==4)
        {
            flag=false;
            
            break;
        }
        
        
        k=digitsumsquare(k);
    }
    cout<<(flag ? "true" : "false");
    

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}