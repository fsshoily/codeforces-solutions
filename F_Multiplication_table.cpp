#include<iostream>
using namespace std;
int main()
{
    int N,i,s;
    cin>>N;
    for(i=1;i<=12;i++)
    {
       s= N*i;
       cout<<N<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<s<<'\n';
    }
}