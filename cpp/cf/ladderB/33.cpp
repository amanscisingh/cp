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

pll recur(ll a, ll b) {
    // cout<<a<<" "<<b;
    if (a==0 || b==0) {
        return {a, b};
    } else if (a >= 2*b) {
        // unsigned int k1 = a / (2*b);
        return recur(a%(2*b), b);
    } else if ( b >= 2*a) {
        // unsigned int k2 = b / (2*a);
        return recur(a, b%(2*a));
    } else {
        return {a, b};
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b; cin>>a>>b;
    pll s = recur(a,b);

    cout<<s.first<<" "<<s.second;
    

	return 0;	
}