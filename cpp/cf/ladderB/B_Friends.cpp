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
    int n; cin>>n;
    int dp[6][6];
    memset(dp, 0, sizeof(dp));
    rep(i,0,n) {
        int a,b; cin>>a>>b;
        dp[a][b] = 1;
        dp[b][a] = 1;
    }

    bool f=false;
    // check for any three aquainted
    rep(i,1,6) {
        rep(j,i+1,6) {
            rep(k,j+1,6) {
                if ((dp[i][j] == 1 && dp[j][k] == 1 && dp[i][k] == 1) || (dp[i][j] == 0 && dp[j][k] == 0 && dp[i][k] == 0)) {
                    f=true;
                    break;
                }
            }
        }
    }


    cout<<(f ? "WIN" : "FAIL") <<endl;

	return 0;	
}