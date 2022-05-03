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
    int arr[m];
    long long ans = 0;
    int ci=1;
    rep(i,0,m) {
        cin>>arr[i];
        if (arr[i] >= ci) {
            ans += arr[i] - ci;
        } else {
            ans += n-ci + arr[i];
        }

        ci = arr[i];
    }

    cout<<ans<<endl;


	return 0;	
}