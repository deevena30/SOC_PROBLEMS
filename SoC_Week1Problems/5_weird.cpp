#include <bits/stdc++.h>
using namespace std;

long algo(long n){
    if(n==1) return 1;
    cout<<n<<" ";
    if(n%2==0){
        n=n/2;
    }
    else{
        n=(n*3+1);
    }
     
    return algo(n);
}
int main(){
    long n;
    cin>>n;
    cout<<algo(n)<<" ";
}
