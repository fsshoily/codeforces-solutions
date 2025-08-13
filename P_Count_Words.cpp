#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S); 

    int inWord = 0, count = 0;

    for (char ch : S) {
        if (isalpha(ch)) { 
            if (!inWord) { 
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0; 
        }
    }

    cout << count << "\n";
    return 0;
}
