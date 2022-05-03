#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a;cin>>a;
    int ans=0;
    ans += (a+1);
    if (n==1) {
        cout<<ans<<endl;
    } else {
        rep(i,0,n-1) {
            int t; cin>>t;
            ans += 1 + abs(t-a) + 1;
            a = t;
        }
        cout<<ans<<endl;
    }

	return 0;	
}