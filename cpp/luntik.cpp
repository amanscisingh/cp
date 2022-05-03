#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--) {
        int n; cin>>n;
        long long arr[n];
        long long cZero = 0, cOne=0;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            if (arr[i] == 0) cZero ++;
            if (arr[i] == 1) cOne++;
        }
        long long ans = cOne*(pow(2, cZero));
        cout<<ans<<endl;
                

    }
    return 0;
}