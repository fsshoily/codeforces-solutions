#include<iostream>
using namespace std;
int main()
{
    int A,B,r=0,t;
    cin>>A>>B;
    for(int i=A; i<=B; i++)
    {    
        t=i;
        while(t)
        {
            if(t%10==4 || t%10==7)
        {
            t/=10;
        }
        else
        {
            break;
        }
        }
        if(t==0)
        {
            cout<<i<<" ";
            r++;
        }
    }
    if(r==0)
    {
        cout<<"-1";
    }
}