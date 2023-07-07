#include<bits/stdc++.h>
using namespace std;
#define pb push_back

void dfs(int node,vector<bool>&vis,vector<int>adj[],vector<int>& stored_dfs){
    stored_dfs.pb(node);
    vis[node]=true;
    for(auto i :adj[node]){
        if(!vis[i]){
            dfs(i,vis,adj,stored_dfs);
        }
    }
}

vector<int>DFS(int V,vector<int>adj[]){
    vector<bool>vis(V+1,false);
    vector<int>v;
    for(int i=1;i<=V;i++){
        if(!vis[i])
            dfs(i,vis,adj,v);
    }
    return v;
}



int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int V;cin>>V;
        vector<int>adj[V+1];
        for(int i=1;i<=V;i++){
            int x;cin>>x;
            for(int j=0;j<x;j++){
                int y;cin>>y;
                adj[i].pb(y);
            }
        }
        vector<int>v=DFS(V,adj);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}