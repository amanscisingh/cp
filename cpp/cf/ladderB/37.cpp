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

bool isOk(int arr[], int k, int n) {
    rep(i,0,n) if (arr[i] < k) return true;
    return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k; cin>>n>>k;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    sort(arr, arr+n);
    int cnt=0;
    while(isOk(arr, k, n)) {
        int temp=-1;
        cnt ++;
        rep(i,0,n) {
            if (arr[i] != temp && arr[i] < k) {
                temp = arr[i];
                // cout<<arr[i]<<" ";
                arr[i] ++;
            } else {
                continue;
            }
        }
        sort(arr, arr+n);
    }
    cout<<endl;
    cout<<cnt<<endl;

	return 0;	
}