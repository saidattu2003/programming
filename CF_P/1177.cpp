#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int v,e;
        cin>>v>>e;
        vector<int>adj[v+1];
        for(int i=1;i<=e;i++){
            int v,u;
            cin>>v>>u;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        


    }
    return 0;
}