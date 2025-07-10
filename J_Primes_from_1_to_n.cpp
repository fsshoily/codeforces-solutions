#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    for(i=2;i<=N;i++)
    {   
        bool isPrime=true;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
              isPrime=false;
                break;
            }
        }
        if(isPrime)
        {
            cout<<i<<" ";
        }
    }
    
}