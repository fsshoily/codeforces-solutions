#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a,b,n;
cin>>a>>b;
n=a/b;
cout<<"floor " << a<< " / " << b <<" = "<< floor(n)<<endl;
cout<<"ceil " << a<< " / " << b <<" = "<< ceil(n)<<endl;
cout<<"round " << a<< " / " << b <<" = "<< round(n)<<endl;
return 0;
}