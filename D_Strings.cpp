#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string A,B;
    cin>>A>>B;
    cout<<A.length()<<" "<<B.length()<<endl;
    cout<<A<<B<<'\n';
    A[0]=A[0]^B[0];
    B[0]=A[0]^B[0];
    A[0]=A[0]^B[0];
    cout<<A<<" "<<B;
}