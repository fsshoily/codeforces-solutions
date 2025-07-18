#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
      cin>>A[i];
      if(A[i]>0) cout<<"1"<<" ";
      else if (A[i]<0) cout<<"2"<<" ";
      else if (A[i]==0) cout<<"0"<<" ";
    }
}