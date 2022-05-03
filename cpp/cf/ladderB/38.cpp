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
    vi arr[m]; 
    rep(i,0,m) {
        int l,r,t,c; cin>>l>>r>>t>>c;
        arr[i] = {l,r,t,c};
    }
    int ans=0;
    rep(i,1,n+1) {
        int mini = INT_MAX;
        int ind=-1;
        rep(j,0,m) {
            if (arr[j][0] <= i && i <= arr[j][1] ) {
                if (arr[j][2] < mini) {
                    mini = arr[j][2];
                    ind = j;
                }
            }
        }

        if(ind!=-1) {
            // cout<<arr[ind][3]<<" ";
            ans += arr[ind][3];
        }
    }

    cout<<ans<<endl;


	return 0;	
}