#include <bits/stdc++.h>
using namespace std;

int main(){
    string moves;
    cin>>moves;
    int U[2]={0,1};
    int D[2]={0,-1};
    int L[2]={-1,0};
    int R[2]={1,0};

    int res[2]={0,0};
    int magnitude;
    for (int i = 0; i < moves.size(); i++)
    {
        if(moves[i]=='_' && moves.size()>1){
            if(i==moves.size()-1){
                for (int j = 0; j < moves.size(); j++)
                {
                    if (moves[j] != '_')
                    {
                        moves[i] = moves[j];
                        break;
                    }
                }
            }
            for (int j = i+1; j < moves.size(); j++)
            {
                if (moves[j]!='_')
                {
                    moves[i]=moves[j];
                    break;
                }
                
            }
            
        }
        
        if (moves[i]=='U')
        {
            res[0]=res[0]+U[0];
            res[1]=res[1]+U[1];
        }
        if (moves[i]=='D')
        {
            res[0]=res[0]+D[0];
            res[1]=res[1]+D[1];
        }
        if (moves[i]=='L')
        {
            res[0]=res[0]+L[0];
            res[1]=res[1]+L[1];
        }
        if (moves[i]=='R')
        {
            res[0]=res[0]+R[0];
            res[1]=res[1]+R[1];
        }
        
        magnitude=abs(0-res[0])+abs(0-res[1]);
        if (moves.size() == 1 && moves[0] == '_'){
            magnitude=1;
        }
        
        
        

    }
    cout<<magnitude;
    
    return 0;
}