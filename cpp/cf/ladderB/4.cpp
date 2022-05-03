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
    string s; cin>>s;
    int cnt=0;
    while (s.size() > 1) {
        cnt++;
        int tempI=0;
        rep(i,0,s.size()) {
            tempI += s[i]-'0';
        }
        s = to_string(tempI);
    }

    cout<<cnt<<endl;

	return 0;	
}