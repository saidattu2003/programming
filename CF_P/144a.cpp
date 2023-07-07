#include<bits/stdc++.h>
using namespace std;

//define
#define ll long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define test int tt; cin>>tt; while(tt--)
#define all(x) (x).begin(), (x).end()
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define MAXp(x) max_element(all(x))
#define MINp(x) min_element(all(x))
#define setbits(x)  __builtin_popcountll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define MOD 1000000007
//




int main(){
    int n;cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        int x;cin>>x;v.pb(x);
    }
    int max=MAXp(v)-v.begin();
    reverse(all(v));
    int min=MINp(v)-v.begin();
    min=n-min-1;
    if(max>min){
        cout<<max-min+n-2<<endl;
    }
    else{
        cout<<max-min-1+n<<endl;
    }



    return 0;
}