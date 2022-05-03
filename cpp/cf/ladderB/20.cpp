#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

bool isLucky(string s) {
    rep(i,0,s.size()) {
        if ( !(s[i] == '4' || s[i] == '7') ) {
            return false;
        }
    }

    return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s4 = "abcd";
    string s7 = "abcdefg";
    // int t = n/7;
    // int left = n%7;

    int tt = n/4;
    int left2 = n%4;
    string ans="";
    rep(i,0,tt){
        ans+=s4;
    }

    switch (left2) {
        case 0:
            break;
        case 1:
            ans += "a";
            break;
        case 2:
            ans += "ab";
            break;
        case 3:
            ans += "abc";
            break;
    }

    cout<<ans<<endl;

	return 0;	
}