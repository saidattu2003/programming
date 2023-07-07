#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;cin>>n;
        int a[n];for(int i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        reverse(a,a+n);
        if(a[0]==a[n-1]){
            cout<<"NO"<<endl;return;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            return;
        }
        

}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        
        solve();


    }
    return 0;
}