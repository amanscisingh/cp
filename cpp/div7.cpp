#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        int n; cin>>n; 
        int k=n%7;
        int p=n%10;
        if (k==0) {
            cout<<n<<endl;
        } else if (p+(7-k) >=10) {
            cout<<n-k<<endl;
        }else {
            cout<<n+(7-k)<<endl;
        }


    }

    return 0;
}