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
    int n; cin>>n;
    string s; cin >>s;
    int ca=0, ci=0, cf=0;
    rep(i,0,n) {
        if(s[i] =='A') {
            ca++;
        } else if(s[i] == 'I') {
            ci++;
        } else {
            cf++;
        }
    }
    
    if (ci==0) {
        cout<<ca<<endl;
    } else if (ci == 1) {
        cout<<1<<endl;
    } else {
        cout<<0<<endl;
    }

	return 0;	
}