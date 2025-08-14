#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int start =0;
    for(int i=0; i<=S.length(); i++){
        if(i==S.length() || S[i]==' '){
         reverse(S.begin() + start, S.begin() + i);
         start = i + 1;
        }
    }
    cout<<S;
}