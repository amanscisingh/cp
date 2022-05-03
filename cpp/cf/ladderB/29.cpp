#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

int countSetBits(int n) {
    int cnt=0;
    while(n) {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k; cin>>n>>m>>k;
    int arr[m+1]; rep(i,0,m+1) cin>>arr[i];
    int cnt=0;
    int t = arr[m];
    rep(i,0,m) {
        if (countSetBits(arr[i] ^ t) <= k ) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
	return 0;	
}