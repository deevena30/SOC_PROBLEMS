#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll divisorSum(int n) {
    ll sum = 0;
    for (ll i = 1; i <= n; ++i) {
        ll term = ((n / i) % MOD) * (i % MOD) % MOD;
        sum = (sum + term) % MOD;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << divisorSum(n) << endl;
    return 0;
}
