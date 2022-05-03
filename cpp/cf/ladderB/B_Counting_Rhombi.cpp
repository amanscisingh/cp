#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

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
    ll n,m; cin>>n>>m;
    // ll minD = 2;
    // ll maxD = min(w,h);
    // ll ans=0;
    // for(int d1=minD; d1<=w; d1+=2) {
    //     for(int d2=minD; d2<=h; d2+=1) {
    //         ans += ( (ll)( w-d1+1 ) * (ll)(h-d2+1) );
    //     }
    // }

    ll a=0,b=0;
    for(int i=2;;i+=2){
        if(i>n and i>m) break;
        if(i<=m) a+=(m-i+1);
        if(i<=n) b+=(n-i+1);
    }

    cout<<((ll)a*b);

	return 0;	
}