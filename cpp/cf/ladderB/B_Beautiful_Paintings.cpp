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
	map<int, int> hm;
	rep(i,0,n) {
		cin>>arr[i];
		hm[arr[i]] ++;
	}

	int cnt=0;
	bool f=true;
	while(f) {
		int temp=0;
		for (auto it: hm) {
			if (it.second > 0) {
				temp ++;
				hm[it.first] --;
			}
		}

		if (temp == 0) {
			f=false;
		}

		cnt += temp>0 ? temp-1 : 0;


	}

	cout<<(cnt)<<endl;


    
    
	return 0;	
}