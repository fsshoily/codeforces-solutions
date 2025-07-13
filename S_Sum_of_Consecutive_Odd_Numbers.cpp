#include<iostream>
using namespace std;
int main()
{  
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;
        int s= min(X,Y) +1;
        int e=max(X,Y) -1;
        int sum=0;
        for(int i=s; i<=e; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }

}