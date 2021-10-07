#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> v;
        for (int i=0; i<n; ++i) if (s[i] == '2') v.push_back(i); 
        int cntTwo = v.size();
        if (cntTwo == 1 || cntTwo ==2) {
            cout << "NO" << endl;
            continue;
        }

        vector<string> t(n, string(n, '='));
        for (int i=0; i<n; ++i) t[i][i] = 'X';
        for (int i=0; i<cntTwo; ++i) {
            int x = v[i], y = v[(i+1)%cntTwo];
            t[x][y] = '+';
            t[y][x] = '-';
        }

        cout << "yES" <<endl;
        for (int i=0; i<n; ++i) cout<<t[i]<<endl;

    }
    return 0;
}