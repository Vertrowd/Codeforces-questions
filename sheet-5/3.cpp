#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string convert_to_binary(int n){
    vector<int> binary;
    while (n>0)
    {
        binary.push_back(n%2);
        n=n/2;
    }
    vector <int> res;
    string s="";
    for (int i = binary.size()-1; i >=0; i--)
    {
        s+=binary[i]+'0';
    }
    return s;
}

bool is_palindrome(string s){
    string s1="";
    for (int i =s.length()-1; i >=0; i--)
    {
        s1+=s[i];
    }

    return s1==s;
    
}

bool checkodd(int n){
    if (n%2!=0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    string s=convert_to_binary(n);

    if (is_palindrome(s) && checkodd(n))    

    {
        cout<<"YES";
    }
    else{

        cout<<"NO";
    }
    



    return 0;
}