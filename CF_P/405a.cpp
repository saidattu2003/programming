#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;

return 0;
}