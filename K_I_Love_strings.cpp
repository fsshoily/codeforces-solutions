#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
       string S,T;
       cin>>S>>T;
       int i=0;
       string r = "";
       while(i<S.size() && i<T.size()) {
          r+=S[i];
          r+=T[i];
          i++;
       }
       if(i<S.size()){
        r+=S.substr(i);
       }
       if(i<T.size()){
        r+=T.substr(i);
       }
       cout<<r<<'\n';
    }
   
}