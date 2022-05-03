#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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
    ll n, m; cin>>n>>m;
    ll total = n*n;

    set<ll> rows, cols;
    set<pair<ll,ll>> pts;

    rep(i, 0, m) {
        ll x,y; 
        cin>>x>>y;
        rows.insert(x);
        cols.insert(y);

        ll lr=rows.size(), lc = cols.size();
        ll occupied = lr * n;
        occupied += lc * n;
        occupied -= lc*lr;
        

        cout<<(total - occupied)<<" ";


    }

	return 0;	
}