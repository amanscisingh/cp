#include<bits/stdc++.h>
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

ll strToInt(string s) {
    ll ans = 0;
    for(int i=0; i<s.length(); i++) {
        ans = ans*10 + (s[i] - '0');
    }
    return ans;
}

void recur (vi &res, int c4, int c7, string s, ll target) {
    // cout<<s<<" "<<c4<<" "<<c7<<endl;
    if (c4 ==0 && c7==0) {
            // cout<<s<<" ";
        ll tt = strToInt(s);
        if (target <= tt ) {
            res.push_back(tt);
        }
        // s = "";
        return;
    }

    if (c4>0) {
        recur(res, c4-1, c7, s+'4', target);
    }

    if (c7>0) {
        recur(res, c4, c7-1, s+'7', target);
    }

    return;

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    int n=s.size();
    ll num = strToInt(s);
    vi res;
    recur(res, (n+1)/2, (n+1)/2, "", num );
    recur(res, (n+1)/2 + 1, (n+1)/2 + 1, "", num );
    sort(res.begin(), res.end());
    cout<<(res[0])<<endl;

	return 0;	
}