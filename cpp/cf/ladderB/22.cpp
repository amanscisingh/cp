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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k; cin>>n>>k;
    int arr[n];
    rep(i,0,n) {
        cin>>arr[i];
    }

    int t=k-1;
    int i=0;
    for(i=0; i<n; i++) {
        int tt = (t+i) % n;
        if (arr[tt] == 1) {
            break;
        }
    }

    cout<<((t+i+1) > n ? (t+i+1) %n : (t+i+1))<<endl;

	return 0;	
}