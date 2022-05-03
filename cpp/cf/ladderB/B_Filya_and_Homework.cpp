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
    set<int> hm;

    rep(i,0,n) {
        int c; cin>>c; hm.insert(c);
    }

    auto t = hm.begin();

    int a = *t;
    t++;
    int b = *t;
    t++;
    int c = *t;

    bool bol = (hm.size() == 1) || (hm.size() == 2) || (hm.size()==3  && ( b-a == c-b ));

    cout<< ( bol ? "YES" : "NO" ) <<endl;
    

	return 0;	
}