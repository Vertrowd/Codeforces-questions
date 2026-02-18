#include <iostream>

using namespace std;



int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    
    int count=0;
    if(x1>x2 || v1>v2){
        for(int i=1;i<100000;i++){
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2){
                count++;
                break;
            }
        }
        if(count==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}
