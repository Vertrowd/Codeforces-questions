#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t,n,s,x;
    cin >> t;


    while (t--) {
        cin>>n>>s>>x;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        if (sum == s) {
            cout << "YES\n";
        }
        else if (sum > s) {
            cout << "NO\n";
        }
        else if ((s - sum) % x == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}