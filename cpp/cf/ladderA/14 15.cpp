#include<bits/stdc++.h>
using namespace std;

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

    // 14
    // int n; cin>>n;
    // int harr[n], garr[n];
    // rep(i, 0, n) {
    //     int h,g; cin>>h>>g;
    //     harr[i] = h;
    //     garr[i] = g;
    // }
    // int cnt = 0;
    // rep(i,0,n) {
    //     rep(j,0,n) {
    //         if (harr[i] == garr[j]) {
    //             cnt++;
    //         }
    //     }
    // }

    // cout<<cnt<<endl;  


    // 15
    // string s[n];
    // int x=0;
    // rep(i,0,n) {
    //     cin>>s[i];
    //     if (s[i] == "++X" || s[i] == "X++") {
    //         x++;
    //     } else if (s[i] == "--X" || s[i] == "X--") {
    //         x--;
    //     }
    // }
    // cout<<x<<endl;

    // 16
    int n,m; cin>>n>>m;
    int c=0, d=0;
    rep(i,0,n) {
        int t;cin>>t;
        if (t == 1) {
            c++;
        } else {
            d++;
        }
    }
    
    int t = min(c,d)*2; 
    rep(i,0,m) {
        int l,r; cin>>l>>r;
        cout<<((r-l) % 2 == 1 && (r-l) < t ? 1 : 0)<<endl;
    }
    
	return 0;	
}