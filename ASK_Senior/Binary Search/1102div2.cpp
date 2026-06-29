#include <iostream>
#include <chrono>
#define int long long
using namespace std;
using namespace std::chrono;
bool isPalindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return original == rev;
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int l,r;
        l=0;
        r=n;
        bool flag=false;
        while (l<=n)
        {
            if (l+r==n)
            {
                if (r%12==0 && isPalindrome(l))
                {
                    cout<<l<<" "<<r<<"\n";
                    flag=true;
                    break;
                }
                else if (l%12==0 && isPalindrome(r))
                {
                    cout<<r<<" "<<l<<"\n";
                    flag = true;
                    break;
                }
                
            }
            
            
            l++;
            r--;
            
        }
        if (flag==false)
        {
            cout<<-1<<"\n";
        }
        
        
    }
    

    return 0;
}

