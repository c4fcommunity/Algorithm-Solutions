#include <bits/stdc++.h>

#define len length

using namespace std;

string res = "";

void plus(string s1, string s2){
    int du = 0,so;

    while(s1.len()<s2.len()){
        s1 = "0"+s1;
    }

    while(s1.len()>s2.len()){
        s2 = "0"+s2;
    }

    for(int i = s1.len()-1; i>=0; i--){
        so = (int)s1[i]+(int)s2[i]+du-96;
        if(so>10){
            du = 1;
            so = so-10;
        }else{
            du = 0;
        }
        res = to_string(du)+res;
    }
}

int main(){
    string a,b;
    cin >> a >> b;
    plus(a,b);
    cout << res;
    return 0;
}