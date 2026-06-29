#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
auto start=high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.length();
    int i,j,k;
    cin>>k;
    int k1=k;
    i=0;
    j=0;
    int mx=0;
    int mx1=0;
        while(j<n){
            if(s[j]=='F'){
                k--;
            }
            while(k<0){
                if(s[i]=='F'){
                    k++;
                }
                i++;
            }
            mx=max(mx,j-i+1);
            j++;

        }
        while(j<n){
            if(s[j]=='T'){
                k1--;
            }
            while(k1<0){
                if(s[i]=='T'){
                    k1++;
                }
                i++;
            }
            mx1=max(mx1,j-i+1);
            j++;

        }
        cout<<max(mx,mx1);
        return mx;

auto stop=high_resolution_clock::now();
auto duration=duration_cast<milliseconds>(stop-start);
cout << '\n' << "Time taken " << duration.count() << " ms";
    return 0;
}