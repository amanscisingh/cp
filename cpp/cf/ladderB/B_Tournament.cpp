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
    int dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    unordered_map<int , int> hm;

    int t = (n * (n-1)) / 2;
    rep(i,0,t-1) {
        int x,y; cin>>x>>y;
        hm[x] ++ ;
        dp[x][y] = 1;
        dp[y][x] = 1;
    }

    int ax,ay;
    rep(i,1,n+1) {
        rep(j,1,n+1) {
            if (i!=j && dp[i][j] == 0) {
                ax = i;
                ay = j;
                break;
            }

        }
    }

    if (hm[ax] > hm[ay]) {
        cout<<ax<<" "<<ay<<endl;
    } else {
        cout<<ay<<" "<<ax<<endl;
    }
    

	return 0;	
}