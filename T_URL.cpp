#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int pos = S.find('?');
    string query = S.substr(pos+1);
    stringstream ss(query);
    string param;
    while(getline(ss, param, '&')){
        int eq = param.find('=');
        string key = param.substr(0, eq);
        string value = param.substr(eq + 1);
        cout << key << ": " << value << "\n";
    }
}