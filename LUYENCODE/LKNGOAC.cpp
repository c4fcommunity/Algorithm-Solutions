#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> a,id;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    int en,fi;

    cin >> s;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='('){
            a.push_back(1);
            id.push_back(i+1);
        }else{
            a.push_back(0);
            id.push_back(i+1);
        }
        if(a.size()>1 && (a[a.size()-1]!=a[a.size()-2])){
            a.pop_back();
            a.pop_back();
            en = id.back();
            id.pop_back();
            fi = id.back();
            id.pop_back();
            cout << fi << " " << en << "\n";
        }
    }
    return 0;
}