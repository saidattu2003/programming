#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        ll ans=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans=ans*x;
        }
        ans=ans+n-1;
        cout<<2022*ans<<endl;
    }
    return 0;
}