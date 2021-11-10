#include <iostream>

using namespace std;

int a[10];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int x;
    bool check = false;

    for(int i = 1; i<=10; i++) cin >> a[i];
    cin >> x;
    for(int i = 1; i<=10; i++)
        if(a[i]==x){
            check = true;
            cout << i <<" ";
        }
    if(check==false) cout << -1;
    return 0;
}