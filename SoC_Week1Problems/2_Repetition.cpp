#include<bits/stdc++.h>
#include<string>
using namespace std;

int rep(string DNA){
    int n=DNA.length();
    int count=1,max=1;
    for(int i=0;i<n;i++){
        if(DNA[i]==DNA[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count >= max){ max=count;}
    }
    return max;
}
int main(){
    string DNA;
    cin>>DNA;
    cout<<rep(DNA);
}