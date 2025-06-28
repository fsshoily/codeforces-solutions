#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;
    if(999<X && X <= 9999)
   {
        while(X>=10)
     {
        X/=10;

     }

     if(X%2==0) 
   {
    cout<<"EVEN";
   }
   else if(X%2!=0)
   cout<<"ODD";
    }  
   
return 0;
}
