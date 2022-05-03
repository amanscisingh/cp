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
	int n; cin>>n;
    int arr[n];
    int ans[n];
    rep(i,0,n) {
        cin>>arr[i];
        ans[arr[i]-1] = i+1;
    }
    // rep(i,0,n) {
    //     ans[arr[i]-1] = arr[i];
    // }

    rep(i,0,n) cout<<ans[i]<<" ";


	return 0;	
}