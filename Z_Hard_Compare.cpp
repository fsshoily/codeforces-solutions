#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double A,B,C,D,a=0,b=0;
    cin >> A >> B >> C >> D;
    a = B*log(A);
    b = D*log(C);
    (a>b) ? (cout << "YES") : (cout<<"NO");
}