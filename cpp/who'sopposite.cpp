#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = 2*abs(a-b);
        if (n >= a && n>=b && n>=c) {
            ll d = n / 2 + c;
			while (d > n) d -= n;
            cout << d << endl;

        } else {
            cout << -1 << endl;
        }

        
    }

    return 0;
    

}