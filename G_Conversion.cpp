#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    for(int i=0; i<S.length(); i++){
        if(S[i]== ','){
            S[i] = ' ';
        }
        else if (islower(S[i])) {
            S[i] = toupper(S[i]); 
        }
         else if (isupper(S[i])) {
            S[i] = tolower(S[i]); 
        }
    }
    cout<<S;
}