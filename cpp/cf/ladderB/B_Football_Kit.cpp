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
    int n; cin>>n;
    unordered_map<int, int> home;
    pi arr[n];
    rep(i,0,n) {
        int h,a; cin>>h>>a;
        arr[i] = {h,a};
        home[h] ++;
    }

    vpi ans = vpi(n, {n-1, n-1});

    rep(i,0,n) {
        ans[i].second -= home[arr[i].second];
        ans[i].first += home[arr[i].second];;

        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    

	return 0;	
}