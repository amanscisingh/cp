#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
    string s; cin>>s; int k; cin>>k; int arr[26]; int mx = -1 *inf;
    rep(i,0,26) {
        cin>>arr[i];
        mx = max(mx, arr[i]);
    }
    int ans = 0;
    int i=1;
    while (i<=s.size()) {
        ans += arr[s[i-1] - 'a'] * i;
        i++;
    }
    

    while (k>0) {
        ans += mx * i;
        i++; k--;
    }

    cout<<ans<<endl;

	return 0;	
}