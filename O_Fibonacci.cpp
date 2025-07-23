#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long a=0,b=1,s;
    if(N==1) cout<<0;
    else if(N==2) cout<<1;
     else {
        for(int i = 3; i <= N; i++) {
            s = a + b;
            a = b;
            b = s;
        }
        cout<<s;
     }

}