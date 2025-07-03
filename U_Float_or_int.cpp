#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float N;
    cin>>N;
    int a = (int)N;
    float b = N - (int)N;
    if (N == (int)N)
    {
        cout<< "int" <<" "<<N;
    }
    else 
    {
        cout<< "float"<< " "<<a<<" "<< fixed << setprecision(3)<<b;
    }
}