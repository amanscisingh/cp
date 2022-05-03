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
    int n; cin>>n; string s; cin>>s;
    if (n <=3) {
        cout<<s<<endl;
    } else {
        int i;
        string ans = "";
        if (n%3 == 1) {
            for(i=0; i < (n/3 - 1)*3; i+=3) {
                ans += s.substr(i, 3);
                ans += "-";
            }
            ans += s.substr(i, 2);
            ans += "-";
            i+=2;
        } else {
            for(i=0; i < (n/3)*3; i+=3) {
                ans += s.substr(i, 3);
                ans += "-";
            }
        }
        ans += s.substr(i);

        if (n%3==0) {
            cout<<(ans.substr(0, ans.size()-1))<<endl;
        } else {
            cout<<ans<<endl;

        }
    }
    

	return 0;	
}