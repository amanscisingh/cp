#include<bits/stdc++.h>
using namespace std;

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
    int n,t; cin>>n>>t;
    string s; cin>>s;

    rep(i,0,t) {
        rep(j,0,n) {
            if (j<n-1 && s[i] == 'B') {
                swap(s[i], s[i+1]);
            }

            if (j>0 && s[i] == 'G') {
                swap(s[i], s[i-1]);
            }
        }
    }

    cout<<s<<endl;

	return 0;	
}