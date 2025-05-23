#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void missing_no( ll n, ll given[] ){
    ll sum1=n*(n+1)/2;//O(1)
    ll sum2=0;
    for(ll i=0;i<n-1;i++){
        sum2+=given[i];// O(n)
    }
    cout<<sum1-sum2<<endl;// O(1)

}
int main(){
    ll n;
    cin>>n; // O(1)
    ll given[n-1];
    for(int j=0;j<n-1;j++){
    cin>>given[j];
    }// O(n)
    missing_no(n, given);
    return 0;
}