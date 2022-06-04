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

int main() {
    int n; cin>>n;
    unordered_map <int, vector<int>> mp;
    rep(i,0,n) {
        int t; cin>>t; 
        mp[t].pb(i);
    }

    vector<pair<int, int>> ans;
    for (auto i: mp) {
        bool b;
        if (i.second.size() == 1) {
            b=true;
            ans.pb({i.first, 0});
        } else {
            b=true;
            int d = i.second[1] - i.second[0];
            for(int k=1; k<i.second.size(); k++) {
                if (i.second[k] - i.second[k-1] != d) {
                    b=false;
                    break;
                }
            }

            if (b) {
                ans.pb({i.first, d});
            }

        }

    }

    sort(ans.begin(), ans.end());
    cout<<(ans.size())<<endl;
    for(auto a:ans) {
        cout<<a.first<<" "<<a.second<<endl;
    }


    return 0;
}