#include <bits/stdc++.h>

using namespace std;

int main(){
    char s;
    cin >> s;
    if(s=='z') cout << 'a';
    else cout << char((int)s+1);
    return 0;
}