#include <iostream>
using namespace std;

int main(){
    int n,so,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> so;
        s += so;
    }
    cout << s;
    return 0;
}