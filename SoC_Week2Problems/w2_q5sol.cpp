#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mincost(vector<ll> lengths, ll n){
        vector<pair<ll, ll>> old_new;
        sort(lengths.begin(), lengths.end());
        ll x = lengths[n/2];
        for( auto t: lengths){
            old_new.push_back({t, x});
        }
        ll min = 0;
        for( int i=0; i<n;i++){
            min += abs(old_new[i].first-old_new[i].second);
        }
        return min;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> lengths(n);
    for(int i=0;i<n;i++){
        cin>>lengths[i];
    }
    cout<<mincost(lengths,n);

}