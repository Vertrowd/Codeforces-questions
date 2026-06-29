#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){

                int res=((arr[i]-arr[i+1])/d)+1;
                arr[i+1]+=d*res;
                count+=res;                
            

        }
    }
    cout<<count<<endl;
    return 0;
}

#include <iostream>
int n, d, x, a[2010], i, t;
int main()
{
    std::cin >> n >> d;
    for (i = 1; i <= n; i++)
        std::cin >> a[i], t = a[i] > a[i - 1] ? 0 : (a[i - 1] - a[i]) / d + 1, x += t, a[i] += t * d;
    std::cout << x;
}