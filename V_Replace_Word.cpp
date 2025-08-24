#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "EGYPT";
    string result;
    for (int i = 0; i < s.size();) {
        if (s.substr(i, target.size()) == target) {
            result += " "; 
            i += target.size();
        } else {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
}

