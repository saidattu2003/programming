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

string bin(int n)
{
    // Size of an integer is assumed to be 32 bits
    string s="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s.pb('1');
        else
            s.pb('0');
    }
    return s;
}

void ans(string s1,string s2){
    int e=0;
    for(int i=0;i<32;i++){
        if(s1[i]=='1' and s2[i]=='0'){
            cout<<-1<<endl;
            return;
        }
        else if(s1[i]=='0' and s2[i]=='1'){
            e=e+pow(2,31-i);
        }
        else{
            e=e+0;
        }
    }
    cout<<e<<endl;

}




int main(){
    test{
        int n,x;
        cin>>n>>x;
        int y=0;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            y=y|a;
        }
        string s1=bin(y);
        string s2=bin(x);
        ans(s1,s2);



    }
    return 0;
}