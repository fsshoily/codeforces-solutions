#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    } 
    int min=0,max=0;
    for(int i=1; i<N; i++){
        if(A[min]>A[i]){
            min=i;
        }
        if(A[max]<A[i]){
            max=i;
        }
    }
       int t=A[min];
       A[min]=A[max];
       A[max]=t;
       for(int i=0; i<N; i++){ 
      cout<<A[i]<<" ";
    }
}