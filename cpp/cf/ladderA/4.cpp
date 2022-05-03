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
    char s[100];
    memset(s,'0',sizeof(s));
    cin.getline(s,100);
    // bool b = s[21]=='?';
    // cout<<"-"<<s[22]<<"-"<<endl;
    // cout<<"-"<<(b)<<"-"<<endl;
    // cout<<"-"<<s[23]<<"-"<<endl;


    int j = 99;
    while (j>0 && (s[j] == '?' || s[j] == '\0' || s[j] == ' ' || s[j] == '0' ) ) {
        j--;
    }
        // cout<<j<<" "<<s[j]<<endl;

    set<char> sr = { 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };
    if (sr.find(s[j]) != sr.end()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
	
	return 0;	
}