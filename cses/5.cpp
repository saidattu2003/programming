#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;cin>>n;
  if(n==2 or n==3){
    cout<<"NO SOLUTION";
  }
  else if(n==4){
    cout<<3<<" "<<1<<" "<<4<<" "<<2;
  }
  else{
    int a[n];
    int t=n;
    for(int i=0;i<n;i=i+2){
        a[i]=t;
        t--;
    }
    for(int i=1;i<n;i=i+2){
        a[i]=t;
        t--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
  }
  

return 0;
}