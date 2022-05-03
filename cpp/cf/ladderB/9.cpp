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
    int n, t; cin>>t; cin>>n;
    int arr[n]; 
    int ans=0;
    rep(i,0,n) {
        cin>>arr[i];
    }

    rep(i,0,n-1) {
        ans += t - arr[i];
    }

    cout<<ans<<endl;
	return 0;	
}