#include<iostream>
using namespace std;
int main()
{
    int N,i,e=0;
    cin>>N;
    for(i=1;i<=N;i++)
    {
       if(i%2==0)
        {
          cout<<i<<'\n';
           e++;
       }
    }
   if(e==0) 
   {
    cout<<"-1";
   }
}