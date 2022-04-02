#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        char s[1000];
        int count = 0;
        cin.getline(s, 1000);
        for (int i = 0; i < strlen(s); i++){
            if (s[i] == ' ' && s[i + 1] != ' ')
                count++;
        }
        cout << count << endl;
    }
}
