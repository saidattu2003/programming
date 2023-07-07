
#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long 

ll ans(int i, string&s, vector<int>&dp, map<string,string>&hc, string curr, set<string>& ds){
    if(i < 0){
        auto it = ds.find(curr);
        if(it == ds.end()){
            ds.insert(curr);
            return 1;
        }
        return 0;
    }
    
    if(dp[i] != -1) return dp[i];
    
    ll t1 = ans(i-1, s, dp, hc, hc[s.substr(i, 1)+curr], ds);
    ll t2 = 0;
    if(i-1 >= 0 &&  hc.find(s.substr(i-1, 2)) != hc.end())
        t2 = ans(i-2, s, dp, hc, hc[s.substr(i-1, 2)]+curr, ds);
    return dp[i] = (t1+t2) % mod;
    
}

int main() {
  ll tt;
  cin >> tt;
  while(tt--){
    string s;cin >> s;
    ll n = s.length();
    vector<int> dp(n, -1);
    map<string, string> hc;
    hc["a"]="01";
    hc["b"]="10";
    hc["ab"]="010";
    hc["ba"]="101";
    set<string> ds;
    string e="";
    cout << ans(n-1, s, dp, hc,e, ds) << endl;
  }
  return 0;
}