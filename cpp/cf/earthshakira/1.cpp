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
    int n,x=0,y=0,z=0; cin>>n;
    rep (i,0,n) {
        int a,b,c; cin>>a>>b>>c;
        x+=a; y+=b; z+=c;
    }

    cout<< (  x==0 && y==0 && z==0 ? "YES" : "NO" ) <<endl;
    

	return 0;	
}