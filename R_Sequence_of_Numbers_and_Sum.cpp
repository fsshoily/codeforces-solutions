#include<iostream>
using namespace std;
int main()
{
     int N,M;
    while(cin>>N>>M)
    {
      if(N<=0||M<=0)
      break;
    int s = min(N,M);
    int e = max(N,M);
    int sum=0;
    for(int i=s; i<=e; i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;

    }
    

}