#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;

        int a=1, d=1, cnt=0;
        while (a<=n) {
            a+=d;
            cnt+=1;
            d+=2;
        }
        int p = a-d+2;
        int mc = p+cnt-1;
        if ( n <= mc) {
            cout<<cnt-(mc -n )<<" "<<cnt<<endl;
        } else {
            cout<<cnt<<" "<<cnt-(n-mc)<<endl;
        }
    }   

    return 0;
 

}