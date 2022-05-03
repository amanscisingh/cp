#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pi pair<int, int>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

bool cmp(pi a, pi b) {
    return a.first > b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    pi keys[n];
    int arr[n];
    rep(i,0,n) {
        int t;cin>>t;
        keys[i] = { t, i };
        arr[i] = t;
    }

    sort(keys, keys+n, cmp);
    int mx = -1*inf;
    int t=0;
    rep (i, 0, n) {
        int ind = keys[i].second;
        int t=1;
        while (ind>0 && arr[ind-1] <= arr[ind]) {
            ind--;
            t++;
        }
        ind = keys[i].second;

        while (ind < n-1 && arr[ind+1] <= arr[ind]) {
            ind++;
            t++;
        }

        mx = max(mx, t);

    }

    cout<<mx<<endl;

	return 0;	
}