#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define pi pair<double, double>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

double dist(int x1, int x2, int y1, int y2) {
    unsigned long long a = pow((x1-x2), 2);
    unsigned long long b = pow((y1-y2), 2);
    return (double) sqrt(a + b);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,vb,vs; cin>>n>>vb>>vs;
    int busStop[n]; rep(i,0,n) cin>>busStop[i];
    int x,y; cin>>x>>y;
    // y = abs(y);
    pair<double, pi> temp[n-1];
    rep(i,1,n) {
        double d = (double) dist(x, busStop[i], y, 0)/vs + (double)busStop[i] / vb;
        // cout<<d<<endl;
        temp[i-1] = {d, {(double) dist(x, busStop[i], y, 0)/vs * 1.00000 ,i+1}};
    }   
    sort(temp, temp+n-1, [] (pair<int, pi> a, pair<int, pi> b) {
        if (a.first == b.first && a.second.first == b.second.first) {
            return a.second.second < b.second.second;
        }

        if (a.first == b.first) {
            return a.second.first < b.second.first;
        }

        return a.first < b.first;
    });

    rep(i,0,n-1) {
        cout<<temp[i].first<<" "<<temp[i].second.first<<" "<<temp[i].second.second<<endl;
    }

    int answer = temp[0].second.second;

    cout<<answer<<endl;

	return 0;	
}