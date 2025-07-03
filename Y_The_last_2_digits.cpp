#include<iostream>
using namespace std;
int main()
{
    long long A,B,C,D,Y;
    cin>>A>>B>>C>>D;
   long long X=1;
   X=(X*A)%100;
    X=(X*B)%100;
    X=(X*C)%100;
    X=(X*D)%100;
    if(X<10)
    cout<<"0"<<X;
   else
    cout<<X;
}