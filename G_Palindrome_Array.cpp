#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    bool p = true;
    for(int i=0; i<N/2; i++)
    {
        if(A[i] != A[N-1-i])
        {
         p = false;
            break;
        }
    }
    if(p) cout<<"YES";
    else cout<<"NO";
} 