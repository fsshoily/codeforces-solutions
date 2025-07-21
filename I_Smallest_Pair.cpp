#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
    {    
        cin>>A[i];
    }
       int sum =  A[0] + A[1] + (1 - 0);
       for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int s = A[i] + A[j] + (j - i);
                if (s < sum) {
                    sum = s;
                }
            }
        }

        cout << sum << endl;
    }
}