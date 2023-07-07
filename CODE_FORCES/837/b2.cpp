#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;cin>>t;
  while(t--){
        int n,k,a=0,an;
    cin>>n>>k;
    vector<set<int>>v(n+1);
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        if(x<y){v[x].insert(y);}
        else{v[y].insert(x);}
    }
    vector<int>vv(n+1,-1);
    int m=n+1;
    for(int i=n;i>=0;i--){
        if(v[i].size()){
             a=*v[i].begin();
            m=min(m,a);
        }
        vv[i]=m;
    }
    an=(n*(n+1))>>1;
    for(int i=1;i<=n;i++){
        if(vv[i]==-1){
            continue;
        }
        else{
            a=vv[i];
            an-=n-a+1;

        }
        
    }
    cout<<an<<endl;
  }

return 0;
}