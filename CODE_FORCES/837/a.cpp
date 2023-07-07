#include<bits/stdc++.h>
using namespace std;
#define int long long 
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int s=0,l=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[0]){
            s++;
        }
        else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==a[n-1]){
            l++;
        }
        else{
            break;
        }
    }
    if(s==l and s==n){
        cout<<n*(n-1)<<endl;
    }
    else{
        cout<<2*s*l<<endl;
    }
    
  }

return 0;
}