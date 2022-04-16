#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int m = s.size();
        int c[4] = {0};
        for (int i = 0; i < m; i++){
            if (isdigit(s[i]))
                c[1] = 1;
            if (s[i] >= 'A' && s[i] <= 'Z')
                c[2] = 1;
            if (s[i] >= 'a' && s[i] <= 'z')
                c[3] = 1;
        }
        int length = min(5,max(m-5,0));
        int charcheck = (c[1] == 1 && c[2] == 1 && c[3] == 1 ? 5 : c[1] + c[2] + c[3]);
        cout << length + charcheck << " ";
    }
}
