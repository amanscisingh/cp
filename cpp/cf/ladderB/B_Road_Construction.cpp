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
    int n,m;
    cin>>n>>m;
    int free[n+1];
    rep(j,0,n+1) free[j] = 1;
    rep(i, 0, m) {
        int a1, a2; cin>>a1>>a2;
        free[a1] = -1; free[a2] = -1;
    }

    int temp;
    int i=1;
    while(i<=n) {
        if (free[i] == 1) {
            temp = i;
            // cout<<temp;
            break;
        }
        i++;
    }

    set<int> st;
    rep(j,1,n+1) st.insert(j);
    st.erase(temp);

    cout<<(n-1)<<endl;
    for(int s: st) {
        cout<<temp<<" "<<s<<endl;;
    }
    
    return 0;
}