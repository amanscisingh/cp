#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

bool cmp(vi a1, vi a2) {
    // if (a1[0] == a2[0] && a1[1] == a2[1] && a1[2] == a2[2]) {
    //     return a1[3] < a2[3];
    // }

    // if (a1[0] == a2[0] && a1[1] == a2[1]) {
    //     return a1[2] < a2[2];
    // }
    
    // if (a1[0] == a2[0]) {
    //     return a1[1] < a2[1];
    // }

    return a1[3] < a2[3];
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vi arr[n];
    rep(i,0,n) {
        int s,r,h,c; cin>>s>>r>>h>>c;
        arr[i] = {s,r,h,c, i};
    }

    sort(arr, arr+n, cmp);
    // int t=0;
    // while(t<n-1) {
    //     if (arr[t][0] < arr[t+1][0] && arr[t][1] < arr[t+1][1] && arr[t][2] < arr[t+1][2]) {
    //         t++;
    //     } else {
    //         break;
    //     }
    // }

    // cout<<(arr[t][4] + 1)<<endl;

    rep(i,0,n) {
        bool f=true;
        // cout<<arr[i+1][3]<<" ";
        rep(j, 0, n) {
            if (i!=j && arr[j][0] > arr[i][0] && arr[j][1] > arr[i][1] && arr[j][2] > arr[i][2]) {
                f=false;
                // cout<<arr[i][3]<<" "<<arr[j][3]<<endl;
                break;
            }
        }
        if (f) {
            cout<<(arr[i][4] + 1)<<endl;
            break;
        }
    }

	return 0;	
}