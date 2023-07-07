#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  cout<<0<<endl;
  for(int i=2;i<=n;i++){
    cout<<((i*i)*(i*i-1)/2)-4*(i-1)*(i-2)<<endl;
  }

return 0;
}