#include<iostream>
using namespace std;
int main(){ 
int T;
cin >> T; 
while (T--){
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
       cin>>A[i];
    }
    int c=0;
    for(int i=0; i<N; i++)
    {
        c++;
        for(int j=i+1; j<N; j++){
            if(A[j]>=A[j-1]){
                c++;
            }
            else break;
        }
    }
   cout<<c<<'\n'; 
}
}