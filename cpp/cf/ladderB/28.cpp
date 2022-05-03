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
    int n; cin>>n; int arr[n]; 
    rep(i,0,n) cin>>arr[i];
    if (n==1 || n==2) {
        cout<<n<<endl;
        return 0;
    }

    int mx = -1 * inf;
    int len = 2;
    rep(i,2,n) {
        if (arr[i] == arr[i-1] + arr[i-2]) {
            len++;
        } else {
            len=2;
        }
        mx = max(mx, len);
    }

    cout<<mx<<endl;

	return 0;	
}