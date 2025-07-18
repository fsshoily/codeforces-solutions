#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    long long  X;
    cin>>X;
    int p=-1;
    for( int i=0; i<N; i++)
    {
    if(X==A[i])
    {
      p=i;
      break;
    }
}
cout<<p;
}