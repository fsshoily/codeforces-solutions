#include<iostream>
using namespace std;
int main() 
{
    int A,B,C,l,s;
    cin>>A>>B>>C;
 if(A<=B && A<=C){
        s=A;
    }
    else if (B<=A && B<=C) 
    {
        s=B;
    }
    else{
        s=C;
    }

if(A>=B && A>=C){
        l=A;
    }
    else if (B>=A && B>=C) 
    {
        l=B;
    }
    else{
        l=C;
    }
    
    
    cout << s << " " << l;
    return 0 ;
}