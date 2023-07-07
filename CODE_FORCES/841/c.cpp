
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vii vector<vector<int>>

int main(){
    int tt;
    cin>>tt;
    while(tt--){
    ll n;
    cin>>n;
    string s1;
    cin>>s1;
     string s2=s1;
   reverse(s2.begin(),s2.end());

   vii t(n+1,vector<int>(n+1));

   for(int i=0; i<n; i++){
    t[0][i]=0;t[i][0]=0;
   } 

   for(int i=1; i<=n; i++)
   {
     for(int j=1; j<=n; j++){
        if(s1[i-1]==s2[j-1]){
         t[i][j]=1+t[i-1][j-1];
       }
       else{
        t[i][j]=max(t[i][j-1],t[i-1][j]);
       }

     }
     
       
    }
    cout<<t[n][n]/2<<endl;
  }

  
    return 0;
    }
    



