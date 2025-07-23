#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
        for(int i=0; i<N; i++){
            int max=A[i];
            for(int j=i; j<N; j++){
                if(A[j]>max){
                    max=A[j];
                }
                cout<<max<<" ";
            }
        }
        cout<<'\n';
    }
        
    }