#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    string diadiem;
    cin >> n >> c;
    while (n--){
        bool badword = false;
        cin >> diadiem;
        for (int j = 0; j < diadiem.length(); j++){
            if (diadiem[j] == c){
                badword = true;
                break;
            }
        }
        if (!badword) cout << diadiem << "\n";
    }
}
