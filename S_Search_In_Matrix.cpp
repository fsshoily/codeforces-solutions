#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int m[N][M];
    for(int i=0; i<N; i++){
      for(int j=0; j<M; j++){
        cin>>m[i][j];
      }
    }
    int X;
    cin>>X;
    bool t=true;
    for(int i=0; i<N; i++){
      for(int j=0; j<M; j++){
        if(m[i][j]==X){
            t= false;
        }
      }
    }
    if(t) cout<<"will take number";
    else cout<<"will not take number";
}