#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    int cntL=0, cntR=0, parts=0;
    vector<string>result;
    string temp = "";
    for(char c:S){
        temp+=c;
        if(c == 'L') cntL++;
        else cntR++;
        if(cntL == cntR) {
            parts++;
            result.push_back(temp);
            temp = "";
            cntL = cntR = 0;  
        }
    }
     cout << parts << "\n";
    for (auto &x : result) cout << x << "\n";
}