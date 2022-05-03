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
	int n;cin>>n;int arr[n]; rep(i,0,n) cin>>arr[i];

    int mx=0, ind;
	rep(i,0,n) {
		if (arr[i] > mx) {
			mx = arr[i];
			ind = i;
		}
	}

	int cnt=0;
	while (ind > 0) {
		swap(arr[ind], arr[ind-1]);
		ind--;
		cnt++;
	}

	int mn=inf; ind=0;
	rep(i,0,n) {
		if (arr[i] <= mn) {
			mn = arr[i];
			ind = i;
		}
	}

	while (ind < n-1) {
		swap(arr[ind], arr[ind+1]);
		ind++;
		cnt++;
	}

	cout<<cnt<<endl;




	return 0;	
}