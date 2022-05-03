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
    map<string, string> hm;
    rep(i,0,m) {
        string s1, s2; cin>>s1>>s2;
        if (s2.size() < s1.size()) {
            hm[s1] = s2;
        } else {
            hm[s1] = s1;
        }
    }

    string ans="";

    rep (i,0,n) {
        string t; cin>>t;
        if (hm.find(t) != hm.end()) {
            ans += hm[t];
        } else {
            ans += t;
        }
        ans += " ";
    }

    cout<<ans<<endl;

	return 0;	
}