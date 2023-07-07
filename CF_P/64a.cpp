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
//




int main(){
    string a,b;cin>>a>>b;
    string s="";
    for(int i=0;i<a.length();i++){
        if((a[i]=='1' and b[i]=='1') or (a[i]=='0' and b[i]=='0') ){
            s.pb('0');
        }
        else{
            s.pb('1');
        }
    }
    cout<<s<<endl;

    return 0;
}