#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int tar = 2; 

    for (int i = tar; i < n - 1; i++) {
    //    cout<<arr[i]<<" ";
        arr[i] = arr[i + 1];
    } 
    n--;
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }

    return 0;
}
