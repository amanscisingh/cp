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

char alphabets[26] = {
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};


int recur(string s, int rep) {
	if (s.size() == 1) {
		return s[0] == alphabets[rep] ? 0 : 1;
	}

	string s1 = s.substr(0, s.size()/2);
	string s2 = s.substr(s.size()/2);

	int c1=0,c2=0;

	for (char c: s1) {
		if (c!=alphabets[rep]) c1++;
	}
	for (char c: s2) {
		if (c!=alphabets[rep]) c2++;
	}

	int a = recur(s1, rep+1) + c2;
	int b = recur(s2, rep+1) + c1;

	return min(a,b);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--) {
		int ln; cin>>ln;
		string s; cin>>s;
		int cnt=recur(s, 0);
		cout<<cnt<<endl;
	}
    

	return 0;	
}