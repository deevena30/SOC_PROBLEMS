#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll mod_inv(ll x) {
    ll res = 1, e = MOD - 2;
    while (e) {
        if (e & 1) res = res * x % MOD;
        x = x * x % MOD;
        e >>= 1;
    }
    return res;
}

ll binomialCoeff(ll n, ll k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || n == k) return 1;
    if (k > n - k) k = n - k;
    ll res = 1;
    for (ll i = 0; i < k; ++i) {
        res = res * (n - i) % MOD;
        res = res * mod_inv(i + 1) % MOD;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << binomialCoeff(a, b) << '\n';
    }
}
