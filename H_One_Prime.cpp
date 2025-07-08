#include<iostream>
using namespace std;
int main()
{
    int N,P=0;
    cin>>N;
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            P++;
        }
    }
    (P==0)?(cout<<"YES"):(cout<<"NO");
}