#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), sorted;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sorted.push_back(a[i]);
    }

    sort(sorted.begin(), sorted.end()); 
    vector<ll> prev(n, 0), curr(n, 0);

    for (int j = 0; j < n; ++j) {
        prev[j] = abs(a[0] - sorted[j]);
        if (j > 0) prev[j] = min(prev[j], prev[j - 1]);
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            curr[j] = abs(a[i] - sorted[j]) + prev[j];
            if (j > 0) curr[j] = min(curr[j], curr[j - 1]);
        }
        prev = curr;
    }

    cout << prev[n - 1] << endl;
}
