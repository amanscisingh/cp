#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

// SmallR is an archer. SmallR is taking a match of archer with Zanoes. They try to shoot in the target in turns, and SmallR shoots first. The probability of shooting the target each time is  for SmallR while  for Zanoes. The one who shoots in the target first should be the winner.

// Output the probability that SmallR will win the match.

int main() {
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double p = (double)a/(b);
    double q = (double)c/(d);
    double r = (double)(1-p)*(1-q);
    double s = (double)p/(1-r);
    cout<<setprecision(12)<<s<<endl;

    return 0;
}