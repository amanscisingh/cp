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
    int c4=0, c7=0;
    rep(i,0,s.size()) {
        if (s[i] == '4') c4++;
        if (s[i] == '7') c7++;
        // cout<<"c4 "<<c4<<endl;
        // cout<<"c7 "<<c7<<endl;
    }
    if (c4 ==0 && c7==0) {
        cout<<"-1"<<endl;
    } else {
        cout<<( c4 >= c7 ? '4' : '7' )<<endl;
    }


	return 0;	
}