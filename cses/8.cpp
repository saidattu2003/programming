#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int t=n*(n+1)/2;
    if(t%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        bool a=true;
        cout<<"YES"<<endl;
        vector<int>v1;
        vector<int>v2;
        if(n%2==0){
            for(int i=0;i<n;i=i+2){
            if(a){
                v1.push_back(i+1);
                v2.push_back(i+2);
                a= !a;
            }
            else{
                v2.push_back(i+1);
                v1.push_back(i+2);
                a= !a; 
            }
        }
        }
        else{
            for(int i=n;i>1;i=i-2){
            if(a){
                v1.push_back(i);
                v2.push_back(i-1);
                a= !a;
            }
            else{
                v2.push_back(i);
                v1.push_back(i-1);
                a= !a; 
            }
            
        }
        v2.push_back(1);
        }
        cout<<v1.size()<<endl;
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }

    }
return 0;
}