#include <iostream>
using namespace std;
int main() {
    int N,i;
    cin >> N;
    int e=0,o=0,p=0,n=0;
    for(i=0;i<N;i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(x>0)
        {
            p++;
        }
        else if(x<0)
        {
            n++;
        }
    }
    cout<<"Even:"<<" "<<e<<'\n';
    cout<<"Odd:"<<" "<<o<<'\n';
    cout<<"Positive:"<<" "<<p<<'\n';
    cout<<"Negative:"<<" "<<n<<'\n';
    return 0;
}
