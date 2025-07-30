#include<iostream>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int A[N],B[M];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    for(int j=0; j<M; j++){
        cin>>B[j];
    }
    int i=0,j=0;
    while(i<N && j<M){
        if(A[i]==B[j]){
            j++;
        }
        i++;
    }
    if(j==M) cout<<"YES";
    else cout<<"NO";
}   