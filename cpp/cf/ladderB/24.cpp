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
    int n,m; cin>>n>>m;
	int arr[m]; rep(i,0,m) cin>>arr[i];
	int mx = 0;
	int mn = 0;
	int tn=n;
	sort(arr, arr + m);
	int temp = n;
	int i=0;
	while(n>0 && i<m) {
		for(int j=arr[i]; j>0; j--) {
			if (n>0) {
				mn += j;
				n--;
			} else {
				break;
			}
		}
		i++;
	}

	rep(i,0,tn) {
		int t=0, ind;
		rep(j,0,m) {
			if (arr[j] >= t) {
				t=arr[j];
				ind = j;
			}
		}
		// cout<<t<<" ";
		mx += t;
		arr[ind] = arr[ind] - 1;

	}

	cout<<mx<<" "<<mn<<endl;

	return 0;	
}