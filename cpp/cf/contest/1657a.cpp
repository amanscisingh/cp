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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin>>t;
    while(t--) {
        double x,y; cin>>x>>y;
        double dist = sqrt( (double)x*x + (double)y*y );

        int t = dist;

        if ( x==0 && y==0) {
            cout<<0<<endl;
        } else if(dist == t) {
            cout<<1<<endl;
        } else {
            cout<<2<<endl;
        }

    }


	return 0;	
}