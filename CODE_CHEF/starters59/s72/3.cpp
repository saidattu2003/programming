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
        int n;
        cin>>n;
        string s=to_string(n);
        bool t=true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='7'){
                t=false;
                cout<<"YES"<<endl;
            }
        }
        if(t){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}