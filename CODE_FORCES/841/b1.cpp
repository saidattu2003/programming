#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll ans;
        ans=((((((337*n)%m)*((n+1)%m))%m)%m)*((4*n-1))%m)%m;
        cout<<ans<<endl;

    }
    return 0;
}