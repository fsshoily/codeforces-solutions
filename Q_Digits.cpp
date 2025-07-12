#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        long long N;
        cin>>N;
        if(N==0)
        {
            cout<<"0\n";
            continue;
        }
        while(N!=0)
        {
            int t=N%10;
            cout<<t<<" ";
            N/=10;
        }
        cout<<endl;
    }
}