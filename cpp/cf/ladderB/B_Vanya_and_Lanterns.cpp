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

ll inf = -1*1e10;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l; cin>>n>>l;
    ll diff = inf;
    ll arr[n];
    rep(i,0,n) {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    ll t=0;
    rep(i,0,n) {
        if (arr[i] - t > diff)  {
            diff = arr[i]-t;
        }

        t = arr[i];
    }

    if (arr[0] != 0) {
        diff = max(diff, arr[0] * 2);
    }

    if (arr[n-1] != l) {
        diff = max(diff, (l-arr[n-1]) *2 );
    }

    cout<<setprecision(10)<<(double)diff/2<<endl;

    // cout<<((double) diff/2) <<endl;

	return 0;	
}