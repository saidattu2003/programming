#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  string s;cin>>s;
  int n=s.length();
  int c=1;
  int m=0;
  for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        c++;
    }
    else{
        m=max(m,c);
        c=1;
    }
  }
  m=max(m,c);
  cout<<m;

return 0;
}