#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    vector<string> words(T);
   for(int i=0; i<T; i++) { 
    cin>>words[i];
   }
   for(int i=0; i<T; i++) { 
    string S = words[i];
     if(S.length()>10){
            cout<<S[0]<<S.length()-2<<S[S.length()-1]<<'\n';
        }
        else cout<<S<<'\n';
    }
}