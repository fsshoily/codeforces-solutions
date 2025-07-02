#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    int first,mid,last;
    cin>>A>>B>>C;
    if (A<=B && A<=C) 
    {
        first = A;
        if(B<=C)
        {
            mid =B;
            last =C;
        }
        else if( C<= B)
        {
            mid = C;
            last = B;
        }

    }
    else if(B<=A && B<=C)
    {
        first = B;
        if(A<=C)
        {
           mid =A;
           last=C; 
        }
    else if(C<=A)
    {
        mid =C;
        last =A;
    }
    }
    else
    {
        first =C;
        if(A<=B){
            mid =A;
            last=B;
        }
        else {
            mid =B;
            last=A;
        }
    }
    cout<<first<<'\n'<<mid<<'\n'<<last<<'\n'<<'\n';
    cout<<A<<'\n'<<B<<'\n'<<C;
    return 0;
}