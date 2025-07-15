#include<iostream>
using namespace std;
int main()
{
    long long T;
     cin>>T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin>>N;
        int s=0;
        int temp=N;
        while(temp!=0)
        {
           int r=temp%2;
           s+=r;
           temp/=2;
        }
        long long t=0;
        for(int j=0; j<s; j++)
        {
            t=t*2+1;
        }
        cout<<t<<'\n';
    }
}
