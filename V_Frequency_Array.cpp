#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int A[N];
    int x[M + 1] = {0};
    for(int i=0; i<N; i++){
        cin>>A[i];
        x[A[i]]++; 
    }
     for(int i=1; i<=M; i++){
            cout<<x[i]<<'\n';
        }
    
}