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
    int s,m,l,xl,xxl; cin>>s>>m>>l>>xl>>xxl;
    int arr[5] = {s,m,l,xl,xxl};
    map<string, int> hm = { { "S", 0 }, { "M", 1 }, { "L", 2 }, { "XL", 3 }, { "XXL", 4 } };
    map<int, string> hm2 = { { 0, "S" }, { 1, "M" }, { 2, "L" }, { 3, "XL" }, { 4, "XXL" } };
    int n;cin>>n;
    string ans[n];
    rep(i,0,n) {
        string t; cin>>t;
        int j = hm[t];
        if (arr[j] >0) {
            arr[j] --;
            ans[i] = t;
        } else {
            int t=1;
            while( j+t < 5 || j-t>=0 ) {
                if (j+t < 5 && arr[j+t] > 0) {
                    arr[j+t]--;
                    ans[i] = hm2[j+t];
                    break;
                } else if (j-t >=0 && arr[j-t] > 0) {
                    arr[j-t]--;
                    ans[i] = hm2[j-t];
                    break;
                } else {
                    t++;
                }
            }
        }

    }

    rep(i,0,n) {
        cout<<ans[i]<<endl;
    }

	return 0;	
}