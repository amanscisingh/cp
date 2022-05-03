#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define pi pair<int,int>    
#define vvi vector<vi>
#define vpi vector<pair<int, int>>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    pi arr[n];
    int t[n];
    rep(i,0,n) {
        int a; cin>>a;
        arr[i] = {a,i};
        t[i] = a;
    }   

    sort(arr, arr+n, [](pi a, pi b) {
        return a.first<b.first;
    });

    int i=0;
    while(i<n) {
        pi temp = arr[i];
        if ( temp.second == 0 || temp.second == n-1 || t[temp.second - 1 ] == inf ||  t[temp.second + 1] == inf ) {
            i++;
        } else {
            t[temp.second] = inf;
            i++;

        }
    }

    int mn = inf;
    rep(i,0,n) {
        // cout<<t[i]<<" ";
        mn = min(mn, t[i]);
    }
    // cout<<endl;
    cout<<mn<<endl;

	return 0;	
}