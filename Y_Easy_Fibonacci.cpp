#include<iostream>
using namespace std;
int main()
{
    short N;
    cin>>N;
    int f=0, s=1,t;
    if(N>=1) cout<<"0 ";
    if(N>=2) cout<<"1 ";
    for(int i=3; i<=N; i++)
    {  
           t=f+s;
           cout<<t<<" ";
           f=s;
           s=t;
    }
}