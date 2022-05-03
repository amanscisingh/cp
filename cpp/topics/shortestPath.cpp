#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

vi dikshtra(vpi adj[], int start, int n) {
    vi vis(n+1, 0);
    vi dist(n+1, inf);
    dist[start] = 0;

    rep(j,0,n-1) {
        // SEARCH FOR SMALLEST ONE | NOT YES VISITED
        int mn=inf, mi;
        rep(i, 1, n+1) {
            if (dist[i] < mn && vis[i] == 0) {
                mn = dist[i];
                mi = i;
            }
        }   

        vis[mn] = 1;

        for (auto it: adj[mn]) {
            if (dist[mn] + it.second > dist[it.first]) {
                dist[it.first] = dist[mn] + it.second;
            }
        }
    }

    return dist;

}

int main()
{   
    // ADJECENCY MATRIX ... WEIGHTED
    // NODE, WEIGHT
    int n,m; cin>>n>>m;
    vpi adj[n+1];
    rep(i, 0, m) {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].pb({b, w});
        adj[b].pb({a, w});
    }

    vi ans = dikshtra(adj, 1, n);
    rep(i, 1, n+1) {
        cout<<ans[i]<<" ";
    }


	
	return 0;	
}