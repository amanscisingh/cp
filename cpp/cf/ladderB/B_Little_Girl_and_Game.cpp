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

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    string s; cin>>s;
    unordered_map<char, int> mp;
    for(int i=0; i<s.size(); i++) {
        mp[s[i]]++;
    }

    int noOfOdd = 0;
    for(auto i:mp) {
        if(i.second%2==1) {
            noOfOdd++;
        }
    }

    if (noOfOdd == 0 || noOfOdd %2 == 1) {
        cout<<"First"<<endl;
    } else {
        cout<<"Second"<<endl;
    }
    

    return 0;
}