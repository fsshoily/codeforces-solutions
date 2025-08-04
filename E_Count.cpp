#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string S;
    cin>>S;
    int s=0;
    for(char ch:S){
        s+=ch - '0';
    }
    cout<<s;
}