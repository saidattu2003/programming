#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> BFS(vector<int>adj[],int V,int N){
    vector<int>bfs;
    vector<bool>vis(V+1,false);
    for(int i=1;i<=V;i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto i:adj[node]){
                    if(!vis[i]){
                        q.push(i);
                        vis[i]=true;
                    }
                }
            }
        }
    }
    return bfs;
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
        vector<int>v=BFS(adj,V,1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;



    }
    return 0;
}