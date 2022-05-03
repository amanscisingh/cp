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
    int arr[n];
    int ind=0;
    cin>>arr[0];
    int t=arr[0];
    int inc=0;
    int dec=0;

    rep(i,1,n) {
        cin>>arr[i];
        if(arr[i] < arr[i-1]) {
            dec++;
            ind = i;
        }
    }

    if (dec == 0) {
        cout<<0<<endl;
    } else if( dec == 1 && arr[0] >= arr[ind] && arr[n-1] <= arr[0] ) {
        cout<<(n-ind)<<endl;
    } else {
        cout<<-1<<endl;
    }

	return 0;   	
}