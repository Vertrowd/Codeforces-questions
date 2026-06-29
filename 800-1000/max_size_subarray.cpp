#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<int,int> mp;
    mp[0]=-1;
    cout<<mp[-1];
    return 0;
}