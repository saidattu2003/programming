#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;cin>>n;
  int s=0;
  for(int i=0;i<n-1;i++){
    int x;cin>>x;
    s=s+x;
  }
  cout<<(n*(n+1)/2)-s;

return 0;
}