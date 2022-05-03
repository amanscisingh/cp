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
    while(t--){
        int n,B,x,y; cin>>n>>B>>x>>y;

        ll ans=0;
        ll temp=0;
        rep(i, 0, n) {
            temp = temp+x;
            if (temp <= B) {
                ans+=temp;
            } else {
                temp -= x + y;
                ans+=temp;
            }

        }
        cout<<ans<<endl;


    }
    

	return 0;	
}
