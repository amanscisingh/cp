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
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int c=0;
        int i=1;
        int start=0;
        while(i<n) {
            string ts = s.substr(start, i-start+1);
            if ( ts == "()" || ts=="((" || ts=="))" ) {
                start=i+1;
                c++;
                i=start+1;
            } else {
                i++;
                while (i<n && s[i] != ')') {
                    i++;
                }
                if (i<n) {
                    c++;
                    start = i+1;
                    i = start+1;
                }
            }
        }
        cout<<c<<" "<<(n-start)<<endl;  
    }
    
 
	return 0;	
}