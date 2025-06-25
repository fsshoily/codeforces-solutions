#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
double num[100];
int i,n;
cout<<"Enter how many number you want:"<<endl;
cin>>n;

for(i=0;i<n;i++)
{
    cout<<"Enter numbers:" <<endl;
   cin>>num[i];
}

double sum=0,mul=1;
for(i=0;i<n;i++)
{
    sum+=num[i];
    mul*=num[i];

}
 double sub = num[0];
 double div = num[0];
 int rem=(int)num[0];

for(i=1; i<n; i++) {
    sub -= num[i];
    div /= num[i];
    rem %= (int)num[i];
}

cout<<"Sumation is:"<<sum <<endl;

cout<<"Subtraction is:"<<sub<<endl;

cout<<"Multificatoion is:"<<mul<<endl;

cout<<"Divition is:"<<div<<endl;
double avg=sum/n;
cout<<"Avarage is:"<<avg<<endl;
;
cout<<" Remainder is:"<<rem;
getch();

}
