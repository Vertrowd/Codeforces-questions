#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector <int> v1(n);
  vector <int> v2(m);
  for(int i=0;i<n;i++){
    cin>>v1[i];
  }
  for(int i=0;i<m;i++){
    cin>>v2[i];
  }
  
  sort(v1.begin(), v1.end());

  for (int i = 0; i < v2.size(); i++)
  {
    int pos=lower_bound(v1.begin(),v1.end(),v2[i])-v1.begin();
    cout<<n-pos<<"\n";
  } 
}