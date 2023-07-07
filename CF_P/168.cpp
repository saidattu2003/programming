#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n,x,y;cin>>n>>x>>y;
  if(((x*100)/n)>=y){
    cout<<0<<endl;
    cout<<ceil(1.4);
  }
  else{
    cout<<(ceil(double(y*n)/100))-x<<endl;
  }

return 0;
}