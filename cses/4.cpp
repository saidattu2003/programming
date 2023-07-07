#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int d=0;
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        d=d+abs(a[i]-a[i+1]);
        a[i+1]=a[i];
    }
  }
  cout<<d;

return 0;
}