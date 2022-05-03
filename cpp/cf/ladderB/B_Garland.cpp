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
	string s, t;
	cin>>s>>t;
	unordered_map<char, int> tot;
	unordered_map<char, int> inp;

	rep(i,0, s.size()) {
		if(tot.find(s[i]) != tot.end()) {
			tot[s[i]] ++;
		} else {
			tot[s[i]] = 1;
		}
	}
    
	rep(i,0, t.size()) {
		if(inp.find(t[i]) != inp.end()) {
			inp[t[i]] ++;
		} else {
			inp[t[i]] = 1;
		}
	}

	bool f=true;
	int ans=0;

	for(auto i:inp) {
		if (tot.find(i.first) != tot.end()) {
			int a1 = tot[i.first];
			int a2 = i.second;
			ans += min(a1,a2);
		} else {
			f=false;
			break;
		}
	}

	cout<<( f ? ans : -1 )<<endl;

	return 0;	
}