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

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int inf = 1e7;

int main() {
    int n, m; cin>>n>>m;
    int om=m;
    vi temp = {};
    int f,b;
    if (m%2==0) {
        temp.pb((m+1)/2);
        temp.pb((m+1)/2 + 1); 
        f = (m+1)/2 + 2;
        b = (m+1)/2 - 1;
        m-=2;
    } else {
        temp.pb((m+1)/2);
        f = (m+1)/2 + 1;
        b = (m+1)/2 - 1;
        m-=1;
    }

    bool flag=true;
    for (int i=0; i<m; i++) {
        if (flag) {
            temp.pb(b);
            b--;
            flag=false;
        } else {
            temp.pb(f);
            f++;
            flag=true;
        }
    }

    // print(temp);

    int i=0;
    for(int j=0; j<n; j++) {
        if (i==om) {
            i=0;
        }
        cout<<temp[i]<<endl;
        i++;
    }

    return 0;
}