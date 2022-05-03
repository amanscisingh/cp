#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
bool comp (pair<ll, pair<ll, ll>> p, pair<ll, pair<ll, ll>> q) {
    if (p.second.first == q.second.first) 
        return p.second.second > q.second.second;
    
    return p.second.first < q.second.first;
}
int main () {
    ll n, i, a, b, maxi = 0;
    cin>>n;
    
    vector<pair<ll, pair<ll, ll>>> vp(n);
    
    for (i = 0; i < n; i++) {
        cin>>a>>b;
        
        maxi = max(maxi, max(a, b));
        
        vp[i] = {i, {a, b}};
    }
    
    sort(vp.begin(), vp.end(), comp);
    if (vp[0].second.second == maxi)
        cout<<vp[0].first+1;
    else
        cout<<"-1";
    
}