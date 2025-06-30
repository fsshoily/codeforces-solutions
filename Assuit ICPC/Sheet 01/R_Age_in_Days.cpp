#include<iostream>
using namespace std;
int main() {
    int N, years, months, days;
    cin >> N;
    years = N / 365;            
    N = N % 365;       
    months = N / 30;            
    days = N % 30;              
    cout << years<< " "<<"years" << '\n';
    cout<< months<< " " << "months" << '\n';
    cout<< days<< " " << "days" << '\n';
    return 0;
}
