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

int inf = 1e9 + 1;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int mn = inf, mni; 
        int mx = -1*inf, mxi;
        int arr[n];
        rep(i,0,n) {
            cin>>arr[i];
            if (arr[i] < mn) {
                mn=arr[i];
                mni = i;
            }

            if(arr[i] > mx) {
                mx = arr[i];
                mxi = i;
            }
            
        }
        mni++;
        mxi++;

        cout<<mni<<" "<<mxi<<endl;


    }
    

	return 0;	
}