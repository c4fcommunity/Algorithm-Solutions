#include <iostream>
#include <cmath>

using namespace std;

int sum(int n) {
    int s = 0;
    for(int i = 1; i<=trunc(sqrt(n)); i++)
        if(n%i==0){
            s = s+n/i+i;
        }
    if(trunc(sqrt(n))==sqrt(n)) s -= trunc(sqrt(n));
    return s;
}

int main(){
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n;

    cin >> t;
    while(t>0){
        --t;
        cin >> n;
        cout << sum(n) << "\n";
    }
    return 0;
}