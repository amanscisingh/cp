#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e9;



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // take the extreme approach
    int n; cin>>n;
    pll chess[n];
    ll c1min=inf, c2min=inf, c1max=-1*inf, c2max=-1*inf;
    rep(i,0,n) {
        ll a,b; cin>>a>>b;
        chess[i] = {a,b};
        c1min = min(c1min, a);
        c2min = min(c2min, b);
        c1max = max(c1max, a);
        c2max = max(c2max, b);
    }

    int m; cin>>m;
    pll code[m]; 
    ll d1min=inf, d2min=inf, d1max=-1*inf, d2max=-1*inf;
    rep(i,0,m) {
        ll a,b; cin>>a>>b;
        code[i] = {a,b};
        d1min = min(d1min, a);
        d2min = min(d2min, b);
        d1max = max(d1max, a);
        d2max = max(d2max, b);
    }

    ll a = d1max - c2min;
    ll b = c1max - d2min;
    ll ans = max( a, b );

    cout<<(ans > 0 ? ans : 0)<<endl;

    

	return 0;	
}