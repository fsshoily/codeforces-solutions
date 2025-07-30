#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int a[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
             cin>>a[i][j];
        }
    }
    for(int i=0; i<N; i++){
        int s=0,e=M-1;
        while(e>s){
            swap(a[i][s], a[i][e]);
            s++;
            e--;
        }
    }
     for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}