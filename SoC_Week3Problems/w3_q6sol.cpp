#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f(vector<ll> &wts, vector<ll> &vals, ll W, ll n, vector<vector<ll>> &dp ){
    if(n==0|| W==0) return 0;

    if(dp[n][W]!=-1) return dp[n][W];

    ll take = 0;
    if(wts[n-1]<=W){
        take = vals[n-1] + f(wts, vals, W-wts[n-1], n-1, dp);
    }
    ll  nottake=f(wts, vals, W, n-1, dp);

    return dp[n][W] = max(take , nottake);
}
ll knapsack(vector<ll> &wts, vector<ll> &vals, ll &W){
    ll n= wts.size();
   vector<vector<ll>> dp(n+1, vector<ll>(W+1, -1) );
   return f(wts, vals, W, n,dp);
}
int main(){
    ll N,W;
    cin>>N>>W;
    vector<ll> wts;
    vector<ll> vals;
    while(N--){
        ll wt,val;
        cin>>wt>>val;
        wts.push_back(wt);
        vals.push_back(val);
    }
    cout<<knapsack(wts, vals, W);
}