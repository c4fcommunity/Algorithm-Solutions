#include <iostream>
using namespace std;

int main(){
    int a,b,res=-1000;
    cin >> a >> b;
    if (a>res) res=a;
    if (b>res) res=b;
    cout << res;
    return 0;
}