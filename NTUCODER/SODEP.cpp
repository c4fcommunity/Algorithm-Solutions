#include <iostream>
using namespace std;

int calc(int x){
    if (x<10) return x;
    return (x%10)+calc(x/10);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    if ((calc(n)%10)==9){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}