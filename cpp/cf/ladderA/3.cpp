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
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    cout<<( t==s ? "YES":"NO" );
	
	return 0;	
}