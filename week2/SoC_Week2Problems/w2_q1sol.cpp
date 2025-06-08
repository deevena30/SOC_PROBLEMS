#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll N, ll* songids){
    ll l = 0, maxlen = 0;
    map<ll, ll> m;

    for (ll r = 0; r < N; r++) {
        if (m.find(songids[r]) != m.end() && m[songids[r]] >= l) {
            l = m[songids[r]] + 1; 
        }
        m[songids[r]] = r; 
        maxlen = max(maxlen, r - l + 1);
    }
    return maxlen;
}

int main()
{
    ll n;
    cin>>n;
    ll songids[n];
    for( ll i=0; i< n ;i++){
        cin>>songids[i];
    }

    cout << solve(n, songids) << "\n";
}