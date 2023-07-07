#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long m;cin>>m;
        vector<int>v;
        for(long long i=0;i<n;i++){
            int x;cin>>x;v.push_back(x);
        }
        
        for(int i=0;i<m;i++){
            int x;cin>>x;v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        long long s=0;
        for(long long i=0;i<m;i++) {
            s+=v[i];
        }
        cout<<s<<endl;
    }
    return 0;
}