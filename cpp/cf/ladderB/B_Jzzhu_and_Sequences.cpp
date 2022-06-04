#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

ll calMod(ll n) {
    ll m = 1000000007;
    if (n>=0) {
        return n%m;
    } else {
        ll nabs = abs(n);
        ll k = nabs / m;
        return calMod(( m*(k+1) ) - nabs) ;
    }
}

int main() {
    ll x,y,n;
    cin>>x>>y;
    cin>>n;

    vi reference = { x-y, x, y, y-x, -x, -y };
    ll ans = reference[n%6];
    ans = calMod(ans);
    cout<<ans;

    return 0;
}