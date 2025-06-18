#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll shortesttime(ll n, ll t, vector<ll>& times){
    ll low=1;
    ll high=*min_element(times.begin(), times.end())*t;
    
    ll ans;
    while(low<=high){
        ll products=0;
        ll mid=(low+high)/2;
        for(auto i=0; i<times.size();i++){
            products+=((ll)mid/times[i]);
        }
        if(products>=t){
           ans=mid;
           high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> times;
    for(int i=0;i<n;i++){
        int time;
        cin>>time;
        times.push_back(time);
    }
    cout<<shortesttime(n, t, times);
}