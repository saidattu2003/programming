#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll ans1=0,ans2=0;
        for(ll i=1;i<=n;i++){
            ans1=ans1+((i*i)*2022);
        }
        for(ll i=1;i<n;i++){
            ans2=ans2+(i*(i+1)*2022);
        }
        ans1=(ans1+ans2)%mod;
        cout<<ans1<<endl;
    }
    return 0;
}