#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2) {
    return p1.first>p2.first;
}

int main() {
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
        int b[n], c[n];
        for(int k=0; k<n; k++) {
            cin>>b[k];
        }
        for(int k=0; k<n; k++) {
            cin>>c[k];
        }

        pair<int, pair<int, int>> dp[n]; // { c, {a, b} }
        for(int k=0; k<n; k++) {
            dp[k] = {c[k], {k+1, b[k]}};
        }

        sort(dp, dp+n, cmp);
        int ans=0;

        for(int i=0; i<n; i++) {
            int aa=dp[i].second.first ,bb=dp[i].second.second, cc=dp[i].first;
            
            if(aa==bb) {
                ans+=cc;
            } else if (k>0 && ( (bb-aa) <= aa ) ) {
                // cout<<cc<<"-";
                k--;
                ans+=cc;
            }
        }

        cout<<endl<<ans<<endl;

    }

    return 0;
}