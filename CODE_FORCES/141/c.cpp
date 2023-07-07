#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,e;
        cin>>n>>e;
        int a[n];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        int x=0;
        int ans;
        for(int i=0;i<n;i++){
            if(x>e){
                break;
            }
            else{
                x=x+a[i];
                ans=i+1;
            }
        }
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(v[i].second);
        }
        s.insert(ans);
        vector<int> v1(s.begin(), s.end());
        sort(v1.begin(),v1.end());
        vector<int>::iterator itr =find(v1.begin(), v1.end(),ans);
        cout<<n-distance(v1.begin(), itr)<<endl;




    }
    return 0;
}