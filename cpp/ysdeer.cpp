#include<bits/stdc++.h>
using namespace std;


// Given an undirected graph that consists of N nodes and M edges as well as Q queries 
// with each query containing two nodes (u, v), your task is to find, for each pair of Q query, 
// the total number of edges found in the newly connected component after connecting
//  between u and v.

// Input
// First line contains a number N, M (1 ≤ N ≤ 100), (1 ≤ M ≤ (N * (N - 1)) / 2).
// The next M lines contains two numbers (u, v), representing an undirected edge between u and v.
// Next line contains an integer Q (1 ≤ Q ≤ 300).
// The next Q lines contains two numbers (u, v).

// Output
// Print Q lines containing the total number of edges found for each query.

int main()
{
	int n, m;

    // read the inputs
    cin >> n >> m;
    // pair<int, int> graph[m];
    int graph[n+1][n+1];
    memset(graph, 0, sizeof(graph));
    for(int i=0; i<m; i++) {
        int t1,t2;
        cin>>t1>>t2;
        graph[t1][t2] = 1;
        graph[t2][t1] = 1;
    }

    int q;cin>>q;
    pair<int, int> query[m];
    for(int i=0; i<q; i++) {
        int t1,t2;
        cin>>t1>>t2;
        query[i] = {t1, t2};
    }
    
    // do the job
    int ans[q];
    for(int i=0; i<q; i++) {
        int u = query[i].first;
        int v = query[i].second;
        graph[u][v] = 1;
        graph[v][u] = 1;
        
        // find count of all connected components in the graph with node u
        int count = 0;
        queue<int> q;
        q.push(u);
        bool visited[n][n];
        memset(visited, 0, sizeof(visited));
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            for(int i=0; i<n; i++) {
                if(graph[cur][i] && !visited[cur][i]) {
                    count++;
                    visited[cur][i] = true;
                    visited[i][cur] = true;
                    q.push(i);
                }
            }
        }

        graph[u][v] = 0;
        graph[v][u] = 0;
        cout<<count<<endl;
    }

    
	return 0;	
}