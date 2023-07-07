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
    int n;cin>>n;
    int c=0;
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==0){
            e++;
        }
        else{
            o++;
        }
        c=c+x;
    }
    if(c%2==0){
        cout<<e<<endl;
    }
    else{
        cout<<o<<endl;
    }
    return 0;
}