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

int inf = INT_MAX;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m; cin>>n>>m;

    int req[n];
    rep(i,0,n) {
        cin>>req[i];
    }

    // sort(req, req+n);

    map<int, int> hm;

    rep(i,0,m) {
        int t; cin>>t;
        if (hm.find(t) != hm.end()) {
            hm[t] ++;
        } else {
            hm[t] = 1;
        }
    }

    int ans= 0 ;


    rep(i,0,n) {
        if(hm.find(req[i]) != hm.end() && hm[req[i]] > 0) {
            hm[req[i]] --;
        } else {
            // not found look for just next bigger number
            // cout<<"u"<<" ";
            int temp = req[i];
            bool f=true;
            for (auto p:hm) {
                if (p.first > temp && p.second > 0) {
                    // cout<<p.first<<" "<<p.second<<endl;
                    hm[p.first] = p.second-1;
                    // cout<<p.first<<" "<<p.second<<endl;
                    f=false;
                    break;
                } 
            }

            if(f) {
                ans++;
            }

        }
    }

    cout<<ans<<endl;

	return 0;	
}