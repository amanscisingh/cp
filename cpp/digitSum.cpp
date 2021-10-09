#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        // int n;
        // cin>>n;
        // cout<< 2 << " " << n-1 <<endl;

        int c, d;
        cin >> c >> d;
        int diff = abs(c-d);
        if (c == 0 && d == 0) cout << 0 << endl;
        else {
            if (diff == 0) cout << 1 << endl;
            else if (diff%2 == 0) cout << 2 << endl;
            else {
                cout << -1 << endl;
            }
        }
        
    }   

    return 0;

}