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
    ll n,m; cin>>n>>m;
    ll arr[m]; 
    rep(i,0,m) cin>>arr[i];
    sort(arr, arr+m);

    if (arr[0] == 1 || arr[m-1] == n) {
        cout<<"NO";
    } else {
        bool f=true;
        rep(i,0,m-2) {
            if (arr[i+2] - arr[i+1] == 1 && arr[i+1] - arr[i] ==1) {
                f=false;
                break;
            }
        }

        cout<<(f?"YES":"NO");
    }
    

	return 0;	
}