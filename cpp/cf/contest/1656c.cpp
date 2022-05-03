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


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int c1=0;
        int odd=0;
        ll arr[n];
        rep(i,0,n) {
            ll a;
            cin>>a;
            arr[i] = a;
            odd+=
            if (a == 1) {
                c1++;
            };
        }

        bool f = c1==0 || odd==n;

        cout<<( f ? "YES" : "NO" )<<endl;

    }

	return 0;	
}