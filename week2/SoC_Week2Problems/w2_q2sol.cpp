#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void findnums(ll sum, vector<ll> arr) {
    map<ll, ll> map;
    for (ll i = 0; i < arr.size(); i++) {
        ll a = sum - arr[i];
        if (map.find(a) != map.end()) {
            cout << map[a] << " " << i+1 << endl;
            return;
        }
        map[arr[i]] = i+1;
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ll n, sum;
    cin >> n >> sum;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findnums(sum, arr);
    return 0;
}
