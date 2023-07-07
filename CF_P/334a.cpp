#include<bits/stdc++.h>
using namespace std;
//#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  int c=(n*n)+1;
  for(int i=1;i<=(n*n)/2;i++){
    cout<<i<<" "<<c-i<<endl;

  }

return 0;
}