#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;


// BFS USING ADJACENCY LIST
void BFS(vi adj[], int start, int n) {
    vi vis(n+1, 0);
    queue<int> q;
    q.push(start);
    cout<<start<<" ";
    vis[start] = 1;

    while ( !q.empty()) {
        int t = q.front();
        q.pop();

        for ( int j: adj[t]) {
            if (vis[j] == 0) {
                vis[j] = 1;
                cout<<j<<" ";
                q.push(j);
            }
        }
    }

}


// DFS USING ADJACENCY LIST
void DFS(vi adj[], int start, int n, vi &vis) {
    vis[start] = 1;

    // IN ORDER TRAVERSAL
    // cout<<start<<" ";

    for (int j: adj[start]) {
        if( vis[j] ==0) {
            DFS(adj, j, n, vis);
        }
    }

    // POST ORDER TRAVERSAL
    cout<<start<<" ";

}

// BFS USING ADJACENCY MATRIX
void BFS2(vvi &adj, int start) {
    int n=adj.size();
    vi vis(n+1, 0);
    queue<int> q;
    q.push(start);
    vis[start] = 1;
    cout<<start<<" ";

    while (!q.empty()) {
        int t = q.front();
        q.pop();

        rep(i, 1, n+1) {
            if (adj[t][i] == 1 && vis[i]==0) {
                cout<<i<<" ";
                vis[i] = 1;
                q.push(i);
            }
        }
    }

}

// DFS USING ADJACENCY MATRIX
void DFS2(vvi &adj, int start, vi &vis) {
    vis[start] = 1;
    int n = adj.size();

    cout<<start<<" ";

    rep(i, 1, n+1) {
        if(adj[start][i] == 1 && vis[i]==0) {
            DFS2(adj, i, vis);
        }
    }
}

int main()
{
    // GRAPH IN ADJACENCY MATRIX INPUT
    int n ,m; cin>>n>>m;
    vvi adjM(n+1, vi(n+1, 0));
    rep(i, 0, m) {
        int a,b; cin>>a>>b;
        adjM[a][b] = 1;
        adjM[b][a] = 1;

    }

    // BFS2(adjM, 1);

    vi vis(n+1, 0);
    DFS2(adjM, 1, vis);



    // GRAPH IN ADJACENCY LIST
    // int n,m; cin>>n>>m;
    // vi adjL[n+1];
    // rep(i, 0, m) {
    //     int a,b;cin>>a>>b;
    //     adjL[a].pb(b);
    //     adjL[b].pb(a);
    // }

    // BFS(adjL, 1, n);

    // vi vis(n+1,0);
    // DFS(adjL, 1, n, vis);



	return 0;	
}

// nodes are from 1-n
// 7 7
// 1 2 3
// 1 3 2
// 2 4 5
// 2 5 1
// 2 6 7
// 2 7 4
// 7 3 6
