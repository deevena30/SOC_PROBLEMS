#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> maxSlidingWindow(vector<ll>& nums, int k) {
        deque<ll> dq;
        vector<ll> output;
        ll n= nums.size();
        for(ll i=0; i<n;i++){
            if(!dq.empty() && dq.front()<=i-k){
                 dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                output.push_back(nums[dq.front()]);
            }
        }
        return output;
}

int main(){
    vector<ll> nums;
    ll x;
    while(cin>>x){
        nums.push_back(x);
    }
    ll k = nums.back();  
    nums.pop_back();
    vector<ll> res = maxSlidingWindow(nums, k);
    for( auto x: res){
        cout<<x<<" ";
    }
    return 0;
}
