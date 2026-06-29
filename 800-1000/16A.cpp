#include <vector>
#include <iostream>
#include <chrono>
using namespace std;
bool allsamedigits(string s){
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i]!=s[0])
        {
            return false;
        }
        
    }
    return true;
    
}
int main() {
    int n,m;
    cin>>n>>m;
    vector <string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        flag=allsamedigits(v[i]);
        if (flag==false)
        {
            break;
        }
        
    }
    if (flag==false)
    {
        cout<<"NO";
    }
    else{
        for (int i = 0; i < n-1; i++)
        {
            if (v[i]==v[i+1])
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES";

        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}