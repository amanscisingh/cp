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
    int t; cin>>t;
    while(t--) {
        int n; string s; cin>>n>>s;
        int res = n - 1;
		for(int i = 0; i < n; ++i)
			if(s[i] == '>' || s[n - 1 - i] == '<')
				res = min(res, i);
		
		cout << res << endl;

    }
    

	return 0;	
}