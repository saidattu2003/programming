#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;cin>>n>>k;
    ll m=INT_MIN;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        if(y>k){
            m=max(m,x-y+k);
        }
        else{
            m=max(m,x);
        }
        
    }
    cout<<m<<endl;

    return 0;
}