#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int m,n; cin>>m>>n;    // m-pictures, n-painters
    int inp[m][n];
    int dp[m][n];

    rep(i,0,m) {
        rep(j,0,n) {
            cin>>inp[i][j];
        }
    }
    
    int temp=0;
    rep(k,0,n) {
        temp+=inp[0][k];
        dp[0][k] = temp;
    }

    temp=0;
    rep(k,0,m) {
        temp+=inp[k][0];
        dp[k][0] = temp;
    }

    rep(i,1,m) {
        rep(j,1,n) {
            dp[i][j] = max( dp[i-1][j], dp[i][j-1] ) + inp[i][j];
        }
    }

    rep(k,0,m) {
        cout<<dp[k][n-1]<<" ";
    }

    return 0;
}