#include <iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
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

