#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x, n;
    cin >> x >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq; //[2,3,3]

    for (int i = 0; i < n; ++i) {
        ll len;
        cin >> len;
        pq.push(len);
    }

    ll total_cost = 0;
    while (pq.size() > 1) {
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        ll merged = a + b;
        total_cost += merged;
        pq.push(merged);
    }

    cout << total_cost << endl;
    return 0;
}
