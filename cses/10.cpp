#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  int c=0;
  for(int j=5;j<=n;j=5+j){
    int i=j;
    while(i%5==0){
    c++;
    i=i/5;
  }
  }
  cout<<c;



return 0;
}