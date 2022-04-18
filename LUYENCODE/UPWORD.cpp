#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++){
        if (s[i] >= 'A' && s[i] <= 'Z' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            count++;
    }
    if (s[s.length() - 1] >= 'A' && s[s.length() - 1] <= 'Z')
        count++;
    cout << count;
}
