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
    int d, tot; cin>>d>>tot;    
    int minavg=0, maxavg = 0;
    pi arr[d];
    int ans[d];
    rep(i,0,d) {
        int l,r; cin>>l>>r;
        arr[i] = {l,r};
        ans[i] = l;
        minavg += l;
        maxavg += r;
    }


    // minavg /= d;
    // maxavg /= d;
    if (minavg <= tot && tot <= maxavg ) {
        cout<<"YES"<<endl;
        int i=0, cap = tot  -minavg;
        while (i<d && cap>0) {
            // cout<<cap<<endl;
            if (arr[i].second - ans[i] < cap ) {
                ans[i] = arr[i].second;
                cap -= (arr[i].second - arr[i].first);
                i++;
            } else {
                ans[i] += cap;
                cap = 0;
                i++;
            }
        }

        rep(k,0,d) cout<<ans[k]<<" ";


    } else {
        cout<<"NO"<<endl;

    }

	return 0;	
}