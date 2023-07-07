#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        string s;
        cin>>s;
        vector<int>b(27);
        unordered_map<char,int>mp;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(!b['a'-s[i]]){
                mp[s[i]]=v[i];
                b['a'-s[i]]=1;
            }
            else{
                if(v[i]=!mp[s[i]]){
                    cout<<"NO"<<endl;
                    ans=true;
                    break;
                }
            }
        }
        if(!ans){
            cout<<"YES"<<endl;
        }


    }
    return 0;
}