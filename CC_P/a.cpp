#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long m;cin>>m;
        vector<int>v1;
        vector<int>v2;
        for(long long i=0;i<n;i++){
            int x;cin>>x;v1.push_back(x);
        }
        for(long long i=0;i<m;i++){
            int x;cin>>x;v2.push_back(x);
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.rbegin(),v2.rend());
        long long s=0;
        for(long long i=0;i<min(m,n);i++) {
            s+=v2[i];
        }
        if(n>m){
            for(long long i=0;i<n-m;i++){
            s+=v1[i];
        }
        }
        


        cout<<s<<endl;
    }
    return 0;
}