#include<iostream>
using namespace std;
int main()
{
    int A,B,r;
    cin>>A>>B;
    while(B!=0)
    {
      r=A%B;
      A=B;
      B=r;
    }
    cout<<A;
}