#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    if (b < c || a > d)
        cout << "NO";
    else
        cout << "YES";
}
