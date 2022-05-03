#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

// bool checkIsLucky(int n, int k) {
//     while (n>0) {
//         int digit = n%10;
//         if (digit == 4 || digit == 7) {
//             k--;
//         }
//         n /= 10;
//     }
//     return k>=0;
// }

int main()
{
    // int n,k; cin>>n>>k;
    // int cnt=0;
    // // int arr[n]; 
    // rep(i,0,n) {
    //     int x; cin>>x;
    //     if (checkIsLucky(x, k)) {
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<endl;

    int dp[5][5];
    int r,c;
    rep(i,0,5) {
        rep(j,0,5) {
            cin>>dp[i][j];
            if (dp[i][j] == 1) {
                r = i+1;
                c = j+1;
            }
        }
    }
    cout<<( abs(3-r) + abs(3-c) )<<endl;
	
	return 0;	
}