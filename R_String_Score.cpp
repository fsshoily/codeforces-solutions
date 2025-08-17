#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string S;
    cin >> N >> S;
    long long score = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'V') {
            score += 5;
        }
        else if (S[i] == 'W') {
            score += 2;
        }
        else if (S[i] == 'X') {
            if (i + 1 < N) i++;   
        }
        else if (S[i] == 'Y') {
            if (i + 1 < N) {
               
                char temp = S[i + 1];
                S.push_back(temp); 
                N++;   
                i++;   
            }
        }
        else if (S[i] == 'Z') {
            if (i + 1 < N) {
                if (S[i + 1] == 'V') {
                    score /= 5;
                    i++; 
                }
                else if (S[i + 1] == 'W') {
                    score /= 2;
                    i++; 
                }
            }
        }
    }

    cout << score << "\n";
    return 0;
}
