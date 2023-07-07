#include <bits/stdc++.h>
using namespace std;

bool MatchInBiParte(vector<vector<bool>> bp, int u,bool visited[], int matched[])
{

    int M = bp[0].size();
    int N = bp.size();
	for (int v = 0; v < N; v++)
	{
		if (bp[u][v] && !visited[v])
		{
			visited[v] = true;
			if (matched[v] < 0 || MatchInBiParte(bp, matched[v],visited, matched))
			{
				matched[v] = u;
				return true;
			}
		}
	}
	return false;
}


int maxbipartite(vector<vector<bool>> bp)
{
    int M = bp[0].size();
    int N = bp.size();

    int matched[N];

    
    memset(matched, -1, sizeof(matched));

    int result = 0; 
    for (int u = 0; u < M; u++)
    {
        
        bool visited[N];
        memset(visited, 0, sizeof(visited));

        
        if (MatchInBiParte(bp, u, visited, matched))
            result++;
    }
    return result;
}


int main()
{

    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;

    vector<vector<bool>> bp(n, vector<bool>(n, false));

   
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        bp[a][b]=true;
    }
	
	if(maxbipartite(bp)>=n-k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

	return 0;
}