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
    string s; cin>>s; int n = s.size();
    char a,b,c,d;
    for(int i=0; i<( (n/4*4)); i+=4) {
        if (s[i] != '!') a = s[i];
        if (s[i+1] != '!') b = s[i+1];
        if (s[i+2] != '!') c = s[i+2];
        if (s[i+3] != '!') d = s[i+3];
    }

    if (n%4 == 1) {
        if (s[(n/4*4) ] != '!') a = s[(n/4*4) ] ;
    }else if (n%4 == 2) {
        if (s[(n/4*4) ] != '!') a = s[(n/4*4) ] ;
        if (s[(n/4*4) + 1] != '!') b = s[(n/4*4) + 1] ;
    }else if (n%4 == 3) {
        if (s[(n/4*4) ] != '!') a = s[(n/4*4) ] ;
        if (s[(n/4*4) + 1] != '!') b = s[(n/4*4) + 1] ;
        if (s[(n/4*4) + 2] != '!') c = s[(n/4*4) + 2] ;
    }

    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    unordered_map<char, int> hm = {
        { a, 0 },
        { b, 0 },
        { c, 0 },
        { d, 0 }
    };

    for(int i=0; i<( (n/4*4)); i+=4) {
        if (s[i] == '!') hm[a] ++ ;
        if (s[i+1] == '!') hm[b] ++ ;
        if (s[i+2] == '!') hm[c] ++;
        if (s[i+3] == '!') hm[d] ++;
    }

    if (n%4 == 1) {
        if (s[(n/4*4) ] == '!') hm[a] ++ ;
    }else if (n%4 == 2) {
        if (s[(n/4*4)] == '!') hm[a] ++ ;
        if (s[(n/4*4) + 1] == '!') hm[b] ++ ;
    }else if (n%4 == 3) {
        if (s[(n/4*4) ] == '!') hm[a] ++ ;
        if (s[(n/4*4) + 1] == '!') hm[b] ++ ;
        if (s[(n/4*4) + 2] == '!') hm[c] ++;
    }

    cout<<hm['R']<<" "<<hm['B']<<" "<<hm['Y']<<" "<<hm['G']<<endl;


    

	return 0;	
}