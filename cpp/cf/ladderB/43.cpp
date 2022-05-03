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
    int n,s,t; cin>>n>>s>>t;
    int arr[n]; rep(i,0,n) cin>>arr[i];

    bool f=false;
    int mp=s-1;
    int fp=t-1;
    int cnt=0;

    rep(i,0,n) {
        if (mp == fp) {
            f=true;
            break;
        } else {
            cnt++;
            mp = arr[mp]-1;
        }
    }

    if (f) {
        cout<<cnt<<endl;
    } else {
        cout<<( mp==fp ? cnt : -1 )<<endl;
    }

	return 0;	
}