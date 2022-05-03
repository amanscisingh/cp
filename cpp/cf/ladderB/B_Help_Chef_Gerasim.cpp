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
    int n; cin>>n;
    pi arr[n];

    rep(i,0,n) {
        cin>>arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr, arr+n, [](pi a, pi b) {
        return a.first < b.first;
    });

    if (arr[0].first == arr[n-1].first) {
        cout<<"Exemplary pages.";
    } else {
        int diff = abs( arr[n-1].first - arr[0].first );

        bool f= diff%2==0 ? true : false;
        diff /=2;
        rep(i,1,n-1) {
            if (arr[i].first - arr[0].first != diff) {
                f=false;
                break;
            }
        }


        if (f) {
            cout<<diff<<" ml. from cup #"<<arr[0].second<<" to cup #"<<arr[n-1].second<<".";
        } else {
            cout<<"Unrecoverable configuration.";
        }
    }

    

	return 0;	
}