#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    for (int _ = 0; _ < Q; _++) {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back") {
            if (!S.empty()) S.pop_back();
        } else if (cmd == "front") {
            if (!S.empty()) cout << S.front() << '\n';
        } else if (cmd == "back") {
            if (!S.empty()) cout << S.back() << '\n';
        } else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)S.size())
                sort(S.begin() + l - 1, S.begin() + r);
        } else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)S.size())
                reverse(S.begin() + l - 1, S.begin() + r);
        } else if (cmd == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= (int)S.size())
                cout << S[pos - 1] << '\n';
        } else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)S.size()) {
                for (int i = l - 1; i < r; i++) cout << S[i];
                cout << '\n';
            }
        } else if (cmd == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}

