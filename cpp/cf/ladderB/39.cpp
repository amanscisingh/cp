#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m; cin>>n>>m;
    set<int> adj[n+1];
    rep(i,0,m) {
        int a,b; cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }

    int cnt = 0;
    while (true) {
        vi temp;
        rep(i,1,n+1) {
            if ( adj[i].size() == 1 ) {
                temp.pb(i);
            }
        }

        if(temp.size()==0) {
            break;
        } else {
            cnt++;
            rep(j,0,temp.size()) {
                auto p = adj[temp[j]].begin();
                int val = *p;
                adj[temp[j]].erase(val);
                adj[val].erase(temp[j]);
            }
            temp.clear();
        }
    }

    cout<<cnt<<endl;

	return 0;	
}