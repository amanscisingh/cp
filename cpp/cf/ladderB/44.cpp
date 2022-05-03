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


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k; cin>>n>>k;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    if (k<= n-1) {
        if (k==n-2) {
            arr[0] = n;
            arr[n-1] = 1;
        } else if (k==n-1) {
            arr[0] = 1;
        } else {
            arr[0] = k+2;
            arr[n-1] = 1;
        }


        for(int i=1; i<k+1; i++) {
            arr[i] = i+1;
        }

        int ind=n-2;
        int val = n;
        rep(j, 0, n-k - 2 ) {
            // cout<<val<<endl;
            arr[ind] = val;
            val--;
            ind--;
        }

        rep(i,0,n) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    } else {
        cout<<-1<<endl;
    }

	return 0;	
}