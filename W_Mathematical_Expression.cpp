#include<iostream>
using namespace std;
int main()
{
    int A,B,C; char S,Q ='=';
    cin>>A>>S>>B>>Q>>C;
    if(S=='+')
    {
        A=A+B;
        (A==C) ? (cout<<"Yes") : (cout<<A);
    }
    else if ( S== '-'){
        A=A-B;
        (A==C) ? (cout<<"Yes") : (cout<<A);
    }
    else
    {
        A=A*B;
        (A==C) ? (cout<<"Yes") : (cout<<A);
    }
} 

