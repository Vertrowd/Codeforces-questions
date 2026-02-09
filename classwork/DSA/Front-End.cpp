#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int range = ceil(n / 2.0);

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> b;   

    for (int i = 0; i < range; i++) {
        b.push_back(arr[i]);

        if (i != n - i - 1) {   
            b.push_back(arr[n - i - 1]);
        }
    }

    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }

    return 0;
}
