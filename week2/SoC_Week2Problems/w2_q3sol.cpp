#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void ThreeNums(ll x, vector<ll> &arr) {
    ll n = arr.size();
    vector<pair<ll, ll>> Index;
    for (ll i = 0; i < n; i++) {
        Index.push_back({arr[i], i + 1});
    }

    sort(Index.begin(), Index.end());

    for (ll i = 0; i < n - 2; i++) {
        ll l = i + 1;
        ll r = n - 1;
        while (l < r) {
            int sum = Index[i].first + Index[l].first + Index[r].first;
            if ( sum == x) {
                cout << Index[i].second << " "
                     << Index[l].second << " "
                     <<  Index[r].second << endl;
                return;
            } else if (sum < x) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main() {
    ll n, sum;
    cin >> n >> sum;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ThreeNums(sum, arr);
    return 0;
}
