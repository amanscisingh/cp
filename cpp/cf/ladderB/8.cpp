#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;
double pi = 2*acos(0.0);

double recur(int i, int rad[]) { 
    if (i == 0) {
        return pi * rad[i] * rad[i];
    }

    return  pi*rad[i]*rad[i] - recur(i-1, rad);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n; int rad[n]; rep(i,0,n) cin>>rad[i]; sort(rad, rad+n);
    double area = recur(n-1, rad);
    cout<<fixed<<setprecision(10)<<area<<endl;

	return 0;	
}