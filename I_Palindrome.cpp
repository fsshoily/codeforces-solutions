#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string S;
    cin>>S;
    bool t = true;
    for(int i=0; i<S.length()/2; i++){
        if(S[i]!=S[S.length()-1-i]){
          t= false;
        }
    }
    if(t) cout<<"YES";
    else cout<<"NO";
}