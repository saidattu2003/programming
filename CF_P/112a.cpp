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
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' and a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]>='A' and b[i]<='Z'){
            b[i]=b[i]-'A'+'a';
        }
    }
    int res=a.compare(b);
    if(res==0){
        cout<<0<<endl;
    }
    else if(res<0){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
    

    return 0;
}