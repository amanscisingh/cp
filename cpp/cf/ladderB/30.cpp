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
    ll n; cin>>n; ll arr[n];
    cin>>arr[0];
    ll cnt=abs(arr[0]);
    rep(i,1,n){ 
        cin>>arr[i];
        cnt+= abs(arr[i-1] - arr[i]) ;
    }

    cout<<cnt<<endl;
    

	return 0;	
}