#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    ll n;
    cin >> n;

    while (n--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if ( b == 0 && c == 0) {
            cout << a << endl;
            continue;
        }
        ll exponent = mod_pow(b, c, MOD - 1);
        ll ans = mod_pow(a, exponent, MOD);

        cout << ans << endl;
    }

    return 0;
}
