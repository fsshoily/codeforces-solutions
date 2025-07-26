#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N],B[N];
    for(int i=0; i<N; i++){
        cin>>A[i];}
        for(int i=0; i<N; i++){
        cin>>B[i];}
    sort(A,A+N);
    sort(B,B+N);
    bool t= true;
    for(int i=0; i<N; i++){
        if(A[i]!=B[i]){
            t=false;
        }
    }
    if(t) cout<<"yes";
    else cout<<"no";
}