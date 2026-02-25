#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int current_sum = arr[0];
    int mx = arr[0];

    for (int i = 1; i < n; i++)
    {
        current_sum = max(arr[i], current_sum + arr[i]);
        mx = max(mx, current_sum);
    }

    cout << mx;

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector <int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for (int s = 0; s < n; s++)
//     {
//         for (int e = s; e < n; e++)
//         {
//             int sum=0;
//             for (int j = s; j <= e; j++)
//             {
//                 sum+=arr[j];
//             }
//             mx=max(mx,sum);
            
//         }
        
//     }
//     cout<<mx;
    

//     return 0;
// }