#include<iostream>
using namespace std;
int main()
{
    int N,A,B;
    cin>>N>>A>>B;
    int total=0;
    for(int i=1;i<=N;i++)
    {
        int sum=0;
        int temp=i;
        while(temp!=0)
        {
            int t=temp%10;
            sum+=t;  
            temp/=10;   
        }
         if(sum>=A && sum<=B)
            {
                total+=i;
            }     
    }
    cout<<total;
}