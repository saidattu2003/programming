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
    if(n<=10){
        cout<<0<<endl;
    }
    else if(n>=11 and n<20){
        cout<<4<<endl;
    }
    else if(n==20){
        cout<<15<<endl;
    }
    else if(n==21){
        cout<<4<<endl;
    }
    else{
        cout<<0<<endl;
    }


    return 0;
}