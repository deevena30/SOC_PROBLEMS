#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MOD = 1e9 + 7;
ll dice_combo(ll n){
    vector<ll> dp(n+1, 0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++) {   
            if((i-j)>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }
    return dp[n];
}
int main(){
    ll n;
    cin>>n;
    cout<<dice_combo(n);
}