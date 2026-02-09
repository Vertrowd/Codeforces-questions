#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int flips1 = 0;
    int flips2 = 0;
 
    for (int i = 0; i < n; i++) {
 
        
        if (i % 2 == 0) {
            if (arr[i] <= 0) flips1++;
            if (arr[i] >= 0) flips2++;
        }
        else {
            if (arr[i] >= 0) flips1++;
            if (arr[i] <= 0) flips2++;
        }
    }
 
    cout << min(flips1, flips2);
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
 
// int main() {
//     int n;
//     cin>>n;
//     vector <int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     vector <int> rev =arr;
//     int count=0;
//     for (int i = 0; i < n-1; i++)
//     {
//         if ((arr[i]>0 && arr[i+1]<0)||(arr[i]<0 && arr[i+1]>0))
//         {
//             continue;
//         } else{
//             arr[i+1]=-arr[i+1];
//             count++;
//         }
        
//     }
//     reverse(rev.begin(), rev.end());
//     int count2=0;
//     for (int i = 0; i < n-1; i++)
//     {
//         if ((rev[i]>0 && rev[i+1]<0)||(rev[i]<0 && rev[i+1]>0))
//         {
//             continue;
//         } else{
//             rev[i+1]=-rev[i+1];
//             count2++;
//         }
        
//     }
 
//     cout<<min(count,count2)<<endl;
    
    
    
    
//     return 0;
// }

