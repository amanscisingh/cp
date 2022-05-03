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
    int n;cin>>n;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    int cnt=0;
    rep(i,0,n) {
        bool f=false;
        rep(j,0,n) {
            if (i+1 == arr[j]) {
                f=true;
                break;
            }
        }

        if (!f) {
            cnt++;
        }
    }

    cout<<cnt<<endl;

	return 0;	
}