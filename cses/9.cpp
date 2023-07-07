#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  int a=1;
  for(int i=0;i<n;i++) {
    a=(a*2)%mod;
  }
  cout<<a%mod;

return 0;
}