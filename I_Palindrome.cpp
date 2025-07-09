#include<iostream>
using namespace std;
int main()
{
    int N,s=0;
    cin>>N;
    int t=N;
    while(t!=0)
    {
        int p=t%10;
        s=s*10+p;
        t/=10;
    }
    cout<<s<<'\n';
    (s==N) ? (cout<<"YES") : (cout<<"NO");
}