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
    int n,m; cin>>n>>m;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    sort(arr, arr+n);
    int i=0; 
    int cnt=0;
    int ans=0;
    while (cnt<m && i<n) {
        if (arr[i] < 0) {
            ans += abs(arr[i]);
            cnt++;
        }
        i++;
    }
    cout<<ans<<endl;

	return 0;	
}