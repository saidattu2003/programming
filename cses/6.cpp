#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    int t=max(x,y);
    if(t%2==0){
        cout<<(t*t)-(abs(t-x)+abs(1-y))<<endl;
    }
    else{
        cout<<(t*t)-(abs(1-x)+abs(t-y))<<endl;
    }
  }

return 0;
}