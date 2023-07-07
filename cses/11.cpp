#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int tn=-(x-2*y);
        if(x==0 and y==0){
            cout<<"YES"<<endl;
        }
        else if(tn%3==0 and tn>=0){
            int n=tn/3;
            if((x-n)%2==0 and (x-n)>=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}