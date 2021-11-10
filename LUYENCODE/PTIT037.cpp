#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define back0(i, n) for (int i = n - 1; i >= 0; i--)
#define back1(i, n) for (int i = n; i > 0; i--)
#define endl "/n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a[10] = {"ZERO",  "ONE",  "TWO",  "THREE",  "FOUR",  "FIVE",  "SIX",  "SEVEN",  "EIGHT",  "NINE"};
    string s, key;
    cin >> s;
    int l = s.length();
    for0(i, 10){
        key = a[i];
        int k = key.size(), d = 0;
        for0(j, l){
            if (s[j] == key[d]){
                d++;
            }
        }
        if(d == k){
            cout << key;
            return 0;
        }
    }
    printf("CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!");
    return 0;
}