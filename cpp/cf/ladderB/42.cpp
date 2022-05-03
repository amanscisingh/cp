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

int inf = -1*1e7;

int typeOf(string s) {
    if (s[0] == s[1] && s[1] == s[3] && s[3]==s[4] && s[4]==s[6] && s[6]==s[7] ) {
        return 0; //taxi
    } else if ( s[0] > s[1] && s[1] > s[3] && s[3] > s[4] && s[4] > s[6] && s[6]>s[7] ) {
        return 1; //pizza
    } else {
        return 2; //call girls
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin>>n;
    // pair<string, vi> arr[n];
    string arr[n];
    vector<int> no[n];
    int it,ip,ig;
    vector<string> taxippl;
    vector<string> pizzappl;
    vector<string> girlppl;
    int mxt=inf, mxp=inf, mxg=inf;
    rep(i,0,n) {
        int c; 
        string name;
        cin>>c>>name;
        arr[i] = name;
        int ct=0, cp=0, cg=0;
        rep(j,0,c) {
            string inp; cin>>inp;
            if (typeOf(inp) == 0) {
                ct++;
            } else if(typeOf(inp) == 1) {
                cp++;
            } else {
                cg++;
            }
        }
        no[i] = { ct, cp, cg };
    }

    rep(i,0,n) {
        int ct=no[i][0], cp=no[i][1], cg=no[i][2];
        
        if ( ct > mxt ) {
            mxt = ct;
            it = i;
            taxippl.clear();
        }

        if (ct == mxt) {
            taxippl.pb(arr[i]);
        }

        if ( cp > mxp) {
            mxp = cp;
            ip = i;
            pizzappl.clear();
        }

        if ( cp ==mxp) {
            pizzappl.pb(arr[i]);
        }
        
        if ( cg > mxg ) {
            mxg = cg;
            ig = i;
            girlppl.clear();
        }

        if ( cg == mxg ){
            girlppl.pb(arr[i]);
        }

    }

    string a1="";
    rep(i,0,taxippl.size()) {
        a1 += taxippl[i];
        a1 += ", ";
    }

    a1 = a1.substr(0, a1.size()-2);

    string a2="";
    rep(i,0,pizzappl.size()) {
        a2 += pizzappl[i];
        a2 += ", ";
    }

    a2 = a2.substr(0, a2.size()-2);

    string a3="";
    rep(i,0,girlppl.size()) {
        a3 += girlppl[i];
        a3 += ", ";
    }

    a3 = a3.substr(0, a3.size()-2);

    cout<<"If you want to call a taxi, you should call: "<<a1<<"."<<endl;
    cout<<"If you want to order a pizza, you should call: "<<a2<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<a3<<"."<<endl;


	return 0;	
}