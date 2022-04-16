#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int so = 0;
    string chu = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9')
            so += (s[i] - '0');
        else
            chu += s[i];
    }
    cout << chu + to_string(so);
}
