#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long A[N], s=0;
    for(int i=0; i<N; i++)
    { 
      cin>>A[i];
        s+=A[i];
    }
      cout<<abs(s);
}