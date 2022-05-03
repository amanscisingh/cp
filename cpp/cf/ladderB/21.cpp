#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pair<int, int>>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

vpi dir = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    string arr[n];

    rep (i,0,n) {
        cin>>arr[i];
    }
    int cnt=0;
    rep(i,0,n) {
        rep(j,0,m) {
            if (arr[i][j] == 'W') {
                for (auto d : dir) {
                    int x = i + d.first;
                    int y = j + d.second;
                    if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == 'P') {
                        arr[x][y] = '.';
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;

	return 0;	
}