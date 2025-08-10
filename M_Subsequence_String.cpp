#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    string target = "hello";
    int j = 0;  

    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i] == target[j]) {
            j++;
            if (j == (int)target.size()) break;
        }
    }

    if (j == (int)target.size()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
