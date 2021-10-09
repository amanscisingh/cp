#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int higher = b;
        int lower = (b)/2+1;
        if (lower >= a) cout<<higher%lower<<endl;
        else cout<<higher%a<<endl;
    }   

    return 0;

}