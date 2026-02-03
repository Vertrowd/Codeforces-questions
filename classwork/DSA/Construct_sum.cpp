#include <iostream>
using namespace std;
class Student{
    int marks;
    public:
        void setmarks(int m){
            marks=m;
        }
        void getmarks(){
            cout<<marks;
        }
};
int main(){
    Student s1;
    s1.setmarks(79);
    s1.getmarks();
    // int t;
    // long s;
    // int n;
    // cin>>t;
    // while (t--)
    // {
    //     cin>>n>>s;

    // }
    
    return 0;
}