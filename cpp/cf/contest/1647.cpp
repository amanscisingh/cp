#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vpi vector<pair<int, int>>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;


// reccurssive function to span the island in rectangular shape
void span(vvi &temp, string arr[], int x, int y) {
    int n = temp.size(), m = temp[0].size();
    rep(i,x, n) {
        rep(j,y,m) {
            if (temp[i][j] == 1) {
                arr[i][j] = '1';
                if (i-1 >= x) {
                    span(temp, arr, x, j);
                }
                if (j-1 >= y) {
                    span(temp, arr, i, y);
                }
            }
        }
    }


}

int main()
{
    int t; cin>>t;
    rep(i,0,t){
        int n,m;cin>>n>>m;
        string arr[n];
        rep(j,0,n) {
            cin>>arr[j];
        }

        vvi temp(n, vi(m));
        rep(j,0,n) {
            rep(k,0,m) {
                if (arr[j][k] == '1' && temp[j][k] == 0) {
                    // temp[j][k] = 1;
                    span(temp, arr, j, k);
                }
            }
        }

        bool flag = true;
        rep(j,0,n) {
            rep(k,0,m) {
                if (temp[j][k] > 1) {
                    flag = false;
                    break;
                }
            }
        }
        cout<<(flag?"YES":"NO")<<endl;

    }
	
	return 0;	
}
