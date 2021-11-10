#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back
#define INF 1999999999
#define maxn 100001

using namespace std;

int a[maxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,t,res1,res2,so,min_max;
    bool check;

    cin >> t;
    while(t>0){
        --t;
        cin >> n;

        min_max = -INF;
        res1 = 0;
        res2 = -INF;
        check = false;

        for(int i = 1; i<=n; i++){
            cin >> so;

            if(so>=0){
                res1 += so;
                check = true;
            }else{
                if(so<0 && min_max<so) min_max = so;
            }

            if(a[i-1]+so>=so) a[i] = a[i-1] + so;
            else a[i] = so;

            res2 = (res2>a[i])? res2 : a[i];
        }

        if(check==false) res1 = min_max;
        cout << res1 << " " << res2 << "\n";
    }
    return 0;
}