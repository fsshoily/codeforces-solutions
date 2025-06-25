#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    cin>>i>>l>>c>>f>>d;
    cout<<i<<endl<<l<<endl<<c<<endl<<fixed<<setprecision(2)<<f<<endl<<fixed<<setprecision(1)<<d;
    return 0;
}