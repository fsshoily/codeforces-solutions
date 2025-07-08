#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long long N,f=1;
        cin>>N;
        for(int j=1;j<=N;j++)
        {
           f*=j;
        }
        cout<<f;
        cout<<'\n';
    }
}