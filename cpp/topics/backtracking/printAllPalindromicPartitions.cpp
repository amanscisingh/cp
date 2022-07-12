#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

void print(vector<string> &arr) {
    for(string i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

bool isPalindrome(string s){
    int i=0, n=s.size()-1;
    while(i<=n) {
        if(s[i]!=s[n]) return false;
        i++; n--;
    }
    return true;
}

void recur(string s, vector<vector<string>> &ans, int  i, int n, vector<string> &tmp) {
    if(i>=n) {
        ans.pb(tmp);
        return;
    }

    for(int k=i; k<n; k++) {
        if(isPalindrome(s.substr(i, k-i+1))) {

            tmp.pb(s.substr(i, k-i+1));
            recur(s, ans, k+1, n, tmp);
            tmp.pop_back();

        }
    }
    return;
    
}

vector<vector<string>> printAllPalindromeSubStr(string s) {
    int i=0, n=s.size();
    vector<vector<string>> ans;
    vector<string> tmp;
    recur(s, ans, i, n, tmp);

    return ans;
}

int main() {
    string s; cin>>s;
    vector<vector<string>> ans = printAllPalindromeSubStr(s);
    cout<<ans.size()<<endl;
    for(vector<string> i:ans) {
        for(string j:i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}