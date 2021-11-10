#include <bits/stdc++.h>

#define BIT(x, k) ((x >> k) & 1)
#define ll long long

using namespace std;

int cntbit (int mask) {
    int res = 0;
    for (int bit = 0; bit < 10; bit++)
        if (BIT (mask, bit) == 1) res++;
    return res;
}

int upbit (int x, int k) {
    return (x | (1 << k));
}

const int N = 20;
const int MOD = 998244353;
const int MASK = (1 << 10) + 5;

string S;
int k, sz;
ll LL, RR, Count[N][MASK][2][2], Pow[N], dp[N][MASK][2][2];

string NumToString (ll n) {
    string s;
    while (n > 0) {
        s = char (n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

ll mul (ll a, ll b) {
    return (a * b) % MOD;
}

int fix (int ok, int c, char b) {
    if (ok) return ok;
    char a = (c + '0');
    if (a < b) return 1;
    if (a == b) return 0;
    return 2;
}

ll cal (int i, int mask, int ok, int flag) {
    ll &foo = dp[i][mask][ok][flag];
    ll &cnt = Count[i][mask][ok][flag];

    if (foo != -1) return foo; else foo = 0;
    if (i == sz) {
        foo = 0, cnt = flag;
        return foo;
    }

    for (int digit = 0; digit < 10; digit++) {
        int nFlag = (flag | (digit > 0));
        int nMask = upbit (mask, digit);
        if (!nFlag) nMask = mask, assert (nMask == 0);
        if (cntbit (nMask) > k) continue;
        int nOk = fix (ok, digit, S[i+1]);
        if (nOk == 2) continue;
        ll mtp = cal (i + 1, nMask, nOk, nFlag);
        cnt = (cnt + Count[i+1][nMask][nOk][nFlag]) % MOD;
        foo = (foo + digit * mul (Pow[sz - i - 1], Count[i+1][nMask][nOk][nFlag]) + mtp) % MOD;
    }

    return foo;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    scanf ("%lld %lld %d", &LL, &RR, &k);

    Pow[0] = 1;
    for (int i = 1; i < 19; i++)
        Pow[i] = (Pow[i-1] * 10) % MOD;

    S = NumToString (LL - 1); 
    sz = S.size(), S = ' ' + S;
    memset (dp, -1, sizeof dp);
    memset (Count, 0, sizeof Count);
    ll Left = cal (0, 0, 0, 0);
    
    S = NumToString (RR);
    sz = S.size(), S = ' ' + S;
    memset (dp, -1, sizeof dp);
    memset (Count, 0, sizeof Count);
    ll Right = cal (0, 0, 0, 0);

    printf ("%lld", (Right - Left + MOD) % MOD);
    return 0;
}