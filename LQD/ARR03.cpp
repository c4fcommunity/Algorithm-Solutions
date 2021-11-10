#include <iostream>
#include <vector>

#define pb push_back
#define maxn 100000

using namespace std;

int a[maxn];
vector <int> res;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,maxx=(int)2e9,k;
    cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++){
        if(a[i]>k && maxx>=a[i]){
            if(maxx==a[i]){
                res.pb(i);
            }else{
                maxx = a[i];
                res.clear();
                res.pb(i);
            }
        }
    }
    cout << maxx << "\n";
    for(int i = 0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}