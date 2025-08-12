#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int freq[26] = {0};
    char S;
    for (int i = 0; i < N; i++) {
        cin >> S;
        freq[S- 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freq[i]; j++) {
            cout << char('a' + i);
        }
    }

    return 0;
}

