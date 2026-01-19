#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int turn = 1;
        for (int i = 0; i < n; i++) {
            if (turn % 2 != 0) { 
                if (a[i] == 1) {
                    a.swap(b);  
                }
            } else { 
                if (b[i] == 1) {
                    a.swap(b);  
                }
            }
            turn++;
        }

        cout << "a: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << "\nb: ";
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }

        

        int result_a = a[0];
        for (int i = 0; i < n-1; i++) {
            result_a ^= a[i+1];
        }

        int result_b = b[0];
        for (int i = 0; i < n-1; i++) {

            result_b ^= b[i+1];
        }


        cout<<"\nresult_a: "<<result_a<<"\n";
        cout<<"result_b: "<<result_b<<"\n";

        if (result_a == result_b) {
            cout << "Tie\n";
        } else if (result_a == 1) {
            cout << "Ajisai\n";
        } else {
            cout << "Mai\n";
        }


    }

    return 0;
}