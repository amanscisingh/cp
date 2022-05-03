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
    vi ans = {n};

    while (n>1) {
        int t=2;
        while(t<=n) {
            if (n%t  == 0) {
                break;
            }
            t++;
        }
        ans.push_back(n/t);
        n/=t;
    }

    // ans.push_back(1);

    for(int i:ans) {
        cout<<i<<" ";
    }
    

	return 0;	
}