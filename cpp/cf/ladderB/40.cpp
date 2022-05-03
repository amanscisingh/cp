#include<bits/stdc++.h>
using namespace std;

#define ll long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

unordered_map<char, string> hm = {
    {'>', "1000"},
    {'<' , "1001"},
    {'+' , "1010"},
    {'-' , "1011"},
    {'.' , "1100"},
    {',' , "1101"},
    {'[' , "1110"},
    {']' , "1111"}
};

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s; cin>>s;
    string res="";
    rep(i,0, s.size()) {
        res += hm[s[i]];
    };
    
    ll ans=0;
    ll t=1;
    for(int i=res.size()-1; i>=0; i--) {
        if (res[i] == '1') {
            ans += t;
            ans  %= 1000003;
        }
        t = t*2;
        t %= 1000003;
    }

    cout<<ans<<endl;


	return 0;	
}