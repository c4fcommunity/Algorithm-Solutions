#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // 5 - 5 - 7 || 5 - 7 - 5 || 7 - 5 - 5
    if (a == 5 && b == 5 && c == 7 || a == 5 && b == 7 && c == 5 || a == 7 && b == 5 && c == 5)
        cout << "YES";
    else
        cout << "NO";
}
