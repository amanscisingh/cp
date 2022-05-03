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
        int n,k; cin>>n>>k;
        set<int> ss;
        rep(i,0,n) {
            int a; cin>>a;
            ss.insert(a);
        }

        bool f=false;

        for (auto x: ss) {
            if (ss.find(x+k) != ss.end()) {
                f=true;
                break;
            }
        }

        cout<<( f ? "YES" : "NO" )<<endl;

    }
    

	return 0;	
}