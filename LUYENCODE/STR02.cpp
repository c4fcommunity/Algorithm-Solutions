#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        int n = s.length();
        s = ' ' + s;
        for (int i = 1; i <= n; i++){
            if ((s[i-1] == ' ') && ('a' <= s[i]) && (s[i] <= 'z')){
                s[i] -= 32;
            }
            if ((s[i-1] != ' ') && ('A' <= s[i]) && (s[i] <= 'Z')){
                s[i] += 32;
            }
        }
        for (int i = 1; i <= n; i++){
            cout << s[i];
        }
        cout << '\n';
    }
}
