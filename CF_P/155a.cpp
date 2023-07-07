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
    int a=0;
    int x;
    cin>>x;
    int min=x;
    int max=x;
    for(int i=1;i<n;i++){
        int y;
        cin>>y;
        if(y>max){
            max=y;
            a++;
        }
        if(y<min){
            min=y;
            a++;
        }
    }
    cout<<a<<endl;

    return 0;
}