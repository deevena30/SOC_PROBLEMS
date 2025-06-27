#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

ll DivisorSum(int n) {
    vector<ll> sum(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            sum[j] = (sum[j] + i) % MOD;
        }
    }

    ll total = 0;
    for (int i = 1; i <= n; ++i) {
        total = (total + sum[i]) % MOD;
    }

    return total;
}

int main() {
    int n;
    cin >> n;
    cout << DivisorSum(n) << endl;
    return 0;
}
