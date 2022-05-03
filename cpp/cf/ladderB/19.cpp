#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    string arr[n];
    rep(i,0,n) cin>>arr[i];
    bool dp[n][m];
    memset(dp, 0, sizeof(dp));
    rep(i,0,n) {
        rep(j,0,m) {
            int t = arr[i][j];
            bool f=false;

            rep(k,0,n) {
                if (k!=i && arr[k][j] == t) {
                    f=true;
                    break;
                }
            }

            rep(k,0,m) {
                if(k!=j && arr[i][k] == t) {
                    f=true;
                    break;
                }
            }

            if (f) {
                dp[i][j] = 1;
            }


        }
    }
    string s="";
    rep(i,0,n) {
        rep(j,0,m) {
            if (dp[i][j] == 0) {
                s+= arr[i][j];
            }
        }
    }

    cout<<s<<endl;


	return 0;	
}