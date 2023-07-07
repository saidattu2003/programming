#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define pb push_back

bool cycle_detection(int node,vector<bool>&vis,vector<int>adj[]){

    queue<pair<int,int>>q;
    q.push({node,-1});
    vis[node]=true;
    while(!q.empty()){
        int x=q.front().first;
        int p=q.front().second;
        q.pop();
        for(auto i:adj[x] ){
            if(!vis[i]){
                q.push({i,x});
                vis[i]=true;
            }
            else if(i!=p){
                return true;
            }
        }
    }
    return false;
}
 
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int V;cin>>V;
        int node ;cin>>node;
        vector<int>adj[V+1];
        vector<bool>vis(V+1);
        for(int i=1;i<=V;i++){
            int x;cin>>x;
            for(int j=0;j<x;j++){
                int y;cin>>y;
                adj[i].pb(y);
            }
        }
        
        for(int i=1;i<V+1;i++){
            if(!vis[i]){
                if(cycle_detection(node,vis,adj)){cout<<"cycle detected";return 0;}
                
            }
        }
        cout<<"No cycle";
        cout<<endl;
    }
    return 0;
}