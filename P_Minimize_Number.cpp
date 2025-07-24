#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N],min=1e9;
    for(int i=0; i<N; i++){
       cin>>A[i];
       int count=0;
       int x= A[i];
       while(x%2==0){
        x/=2;
        count++;
       }
       if(count<min){
        min=count;
       }
    }
    cout<<min;
}