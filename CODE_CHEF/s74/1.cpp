#include<bits/stdc++.h>
using namespace std;

//define
#define ll long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define test int tt; cin>>tt; while(tt--)
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define setbits(x)  __builtin_popcountll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define MOD 1000000007
#define mii map<int,int>
//




void solve(){
    int n;cin>>n;
    vector<int>v(n);
    mii vp;
    mii mp;
    for(int i=0;i<n;i++){
      cin>>v[i];
      vp[v[i]]++;
   }
    vector<int>v2(n+1,0);
    for(int i=n-1;i>=0;i--){
        v2[i]=v2[i+1];
        v2[i]=v2[i]+vp[v[i]+1];
        v2[i]=v2[i]-mp[v[i]-1];
        vp[v[i]]--;
        mp[v[i]]++;
    }
    int a=0;
    for(int i=0;i<n;i++){
        a=max(a,v2[i]);
    }
    cout<<a;

}

int main(){

test{
     solve();
     cout<<"\n";
    }   
  return 0;
}