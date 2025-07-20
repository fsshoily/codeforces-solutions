#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    int i,j;
    for( i=0; i<N; i++)
    {
        cin>>A[i];
    }
     for(int i=0; i<N-1; i++)
     {
           int flag=0;
        for( j=0; j<N-1-i; j++)
          {
             if(A[j]>A[j+1])
                {  
                   int temp;
                   temp = A[j];
                   A[j] = A[j+1];
                   A[j+1] = temp;
                   flag=1;
                }
          }
        if(flag==0)  break;
     }
     for(i=0; i<N; i++)
     {
        cout<<A[i]<<" ";
     }
}