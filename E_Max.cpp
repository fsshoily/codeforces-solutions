#include<iostream>
using namespace std;
int main()
{
    int N,i,M=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        long long x;
        cin>>x;
        if(x>M)
        {
            M=x;
        }
    }
    cout<<M;
} 