#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX = 1e6 + 1;
ll MOD = 1e9 + 7;
vector<ll> ans(MAX); // ans[n] will store total ways for height = n

void precompute() {
    ll a = 1, b = 1;
    ans[1] = (a + b) % MOD;

    for (int i = 2; i < MAX; i++) {
        ll x = (2LL * a + b) % MOD;
        ll y = (4LL * b + a) % MOD;
        a = x;
        b = y;
        ans[i] = (a + b) % MOD;
    }
}

int main() {
    precompute(); 

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ans[n] << "\n";
    }
}
