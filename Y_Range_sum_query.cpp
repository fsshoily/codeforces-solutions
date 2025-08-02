#include<iostream>
using namespace std;
int main(){
    int N,Q;
    cin>>N>>Q;
    long long A[N+1];
    long long prefix[N + 1];
    for(int i=1; i<=N; i++){
        cin>>A[i];
        prefix[i]=prefix[i - 1]+A[i];
    }
    int L,R;
    for(int i=1; i<=Q; i++){
        cin>>L>>R;
        cout<<prefix[R]-prefix[L-1]<<'\n';
    }

}