#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N][N],s=0,m=0;
    for(int i=0; i<N; i++){
       for(int j=0; j<N; j++){
        cin>>A[i][j];
        if(i==j){
            s+=A[i][j];
        }
        if(i+j==N-1){
            m+=A[i][j];
        }
    }

    }
    int t = abs (s-m);
    cout<<t;

}