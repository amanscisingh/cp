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

    // 16
    // int n,m; cin>>n>>m;
    // char arr[n][m];

    // rep(i,0,n) {
    //     rep (j,0,m) {
    //         cin >>arr[i][j];
    //     }
    // }
    
    // int cnt=0;
    // rep(i,0,n) {
    //     bool t=1;
    //     int tcnt=0;
    //     rep(j,0,m) {
    //         if (arr[i][j] == '.') {
    //             tcnt++;
    //             arr[i][j] = 'D';
    //         }
    //         else if (arr[i][j] == 'S') {
    //             t = 0;
    //             break;
    //         }
    //     }
    //     if (t) {
    //         cnt+=tcnt;
    //     } else {
    //         rep(j,0,m) {
    //             if (arr[i][j] == 'D') {
    //                 arr[i][j] = '.';
    //             }
    //         }
    //     }
    // }

    // rep(i,0,m) {
    //     bool t=1;
    //     int tcnt=0;
    //     rep(j,0,n) {
    //         if (arr[j][i] == '.') {
    //             tcnt++;
    //             arr[j][i] = 'D';
    //         }
    //         else if (arr[j][i] == 'S') {
    //             t = 0;
    //             break;
    //         }
    //     }
    //     if (t) {
    //         cnt+=tcnt;
    //     } else {
    //         rep(j,0,n) {
    //             if (arr[j][i] == 'D') {
    //                 arr[j][i] = '.';
    //             }
    //         }
    //     }
    // }
    // cout<<cnt<<endl;

    // 17
    int n,k; cin>>n>>k;
    int t=k-n+1;
    rep(i,0,n) {
        rep(j,0,n) {
            if (i==j) {
                cout<<t<<" ";
            } else {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    


	return 0;	
}