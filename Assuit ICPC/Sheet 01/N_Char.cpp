#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>='a' && x<='z')   
    {
        x = toupper(x);
        cout<<x;
    }
    else if (x>='A' && x<='Z')
    {
        x = tolower(x);
        cout<<x;
    }
    return 0;

}