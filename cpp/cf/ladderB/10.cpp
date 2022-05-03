#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

bool cmp (pi a, pi b) {
    return a.first > b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, k; cin>>n>>k;
    pi arr[n];
    rep(i,0,n) {
        int a; cin>>a;;
        arr[i] = {a, i+1};
    }

    sort(arr, arr+n, cmp);
    cout<<arr[k-1].first<<endl;
    int i=0;
    while (i<k) {
        cout<<arr[i].second<<" ";
        i++;
    }

	return 0;	
}