#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        if(A[i]>10){
            continue;
        }
        cout<<"A["<<i<<"]"<<" = "<<A[i]<<endl;
    }
}