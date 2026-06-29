#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    // gcd of array
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int gcd=arr[0];
    for (int i = 1; i < n; i++)

    {
        int a=gcd;
        int b=arr[i];
        int rem=a%b;
        if (rem==0)
        {
            gcd=b;
        }else{
            while (rem!=0)
            {
                if (a%b!=0)
                {
                    a=b;
                    b=rem;
                    rem=a%b;
                }
            }
            gcd=b;
        }
    }
    cout<<gcd;
    //lcm of array
    int lcm=arr[0];
    for (int i = 1; i < n; i++)
    {
        int a=lcm;
        int b=arr[i];
        int rem=a%b;
        int gcd;
        if (rem==0)
        {
            gcd=b;
        }else{
            while (rem!=0)
            {
                if (a%b!=0)
                {
                    a=b;
                    b=rem;
                    rem=a%b;
                }
            }
            gcd=b;
        }
        lcm=(lcm*arr[i])/gcd;
    }
    cout<<'\n'<<lcm;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int x=arr[i];
        ans=ans^x;
    }

    int mn=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        mn=min(mn,arr[i]);
    }
    cout<<'\n'<<mn;
    int mx=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<'\n'<<mx;
auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}