#include<iostream>
using namespace std;
int main()
{
    int N,pos=1;
    cin>>N;
    int A[N];
    for(int i=1; i<=N; i++)
    {
        cin>>A[i];
    }
        int min=A[1];
        for(int i=1; i<=N; i++)
        { 
        if(min>A[i])
        {
            min=A[i];
            pos=i;
        }
    }
    cout<<min<<" "<<pos;
}