#include<iostream>
using namespace std;
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int s = max(l1, l2);
    int e = min(r1, r2);

    if (s <= e)
        cout << s << " " << e;
    else
        cout << -1;

    return 0;
}
