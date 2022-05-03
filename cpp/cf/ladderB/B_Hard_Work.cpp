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

string parseString(string s) {
	string res = "";
	rep(i,0, s.size()) {
		if (s[i] == '-' || s[i] == ';' || s[i] == '_') {
			continue;
		} else {
			res+= tolower(s[i]);
		}
	}

	return res;
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a, b, c; cin>>a>>b>>c;

	a = parseString(a);
	b = parseString(b);
	c = parseString(c);

	string arr[6] = {a+b+c, c+b+a,  b+a+c, c+a+b, a+c+b, b+c+a};

	int n; cin>>n;

	rep(i,0,n) {
		string inp; cin>>inp;
		inp = parseString(inp);
		bool f=false;
		for (string c: arr) {
			if (inp == c) {
				f=true;
				break;
			}
		}

		cout<<( f ? "ACC" : "WA" )<<endl;
	}
    

	return 0;	
}