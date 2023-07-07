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
    test{
        int n;cin>>n;
        vi v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.pb(x);
        }
        if(n%2==1){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                int t=v[i];
                v[i]=v[i]^t;
                v[i+1]=v[i+1]^t;
            }
            if(v[n-1]==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }

    }
    return 0;
}