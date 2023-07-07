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
    string s;cin>>s;
    bool t=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            cout<<"YES"<<endl;
            t= true;
            return 0;
        }
    }
    if(!t){
        cout<<"NO"<<endl;
    }

    return 0;
}