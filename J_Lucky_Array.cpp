#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    int count=0;
    int min=A[0];
    for(int i=1; i<N; i++){
      if(min>A[i]){
        min=A[i];
      }
    }
    for(int i=0; i<N; i++)
    {
        if(A[i]==min){
            count++;
        }
    }
    if(count%2==0) cout<<"Unlucky";
    else cout<<"Lucky";

}