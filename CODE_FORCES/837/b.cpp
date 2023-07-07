#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int an=0;
    vector<pair<int,int>>v;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;v.push_back({x-1,y-1});
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(i>=v[j].first){
            int s=v[j].first;
            int e=v[j].second;
            j++;
        }


    }


  }

return 0;
}