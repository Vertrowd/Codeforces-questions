#include <iostream>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n, s;
        cin >> n >> s;
 
        long long sum = (n * (n + 1)) / 2;
 
        if (sum < s) {
            cout << -1 << endl;
            continue;
        }
 
        for (long long i = n; i >= 1 && s > 0; i--) {
            if (s >= i) {
                cout << i << " ";
                s -= i;
            }
        }
        cout << endl;
    }
    return 0;
}