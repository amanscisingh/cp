#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
    int arr[3][3];
    rep(i,0,3) {
        rep(j,0,3) {
            cin>>arr[i][j];
        }
    }

    rep(x, 1, 1e5+1) {
        int S = x + arr[0][1] + arr[0][2];
        int y = S - arr[1][0] - arr[1][2];
        int z = S - arr[2][0] - arr[2][1];

        if (x + y + z == S) {
            arr[0][0] = x;
            arr[1][1] = y;
            arr[2][2] = z;
            break;
        }
    }

    rep(i,0,3) {
        rep(j,0,3) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

	return 0;	
}