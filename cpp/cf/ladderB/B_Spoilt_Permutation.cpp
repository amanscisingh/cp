#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int arr[n]; 
    rep(i,0,n) {
        cin>>arr[i];
    }
    
    bool f=false;
    int i=0;
    int l=0,r=0;
    while (i<n) {
        if (arr[i] == i+1) {
            i++;
        } else {
            l = i;
            while(i<n-1 && arr[i+1] == arr[i] -1 ) {
                i++;
            }
            // cout<<l<<r<<endl;
            r=i;
            if (l==r) {
                f=true;
            }
            // i++;
            while(i<n-1) {
                if (arr[i+1] < arr[i]) {
                    f=true;
                    break;
                }
                i++;
            }
            break;
        }
    }



    if ((l==0 && r==0) || f) {
        cout<<0<<" "<<0;
    } else {
        cout<<(l+1)<<" "<<(r+1);
    }
    

	return 0;	
}