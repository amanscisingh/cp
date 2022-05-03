#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        int n=s.size();
        int c0=0,c1=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') {
                c0++;
            } else {
                c1++;
            }

            if (c1!=0 && c0!=0 && c1!=c0) {
                ans=max(ans, min(c0, c1));
            }
        }
        cout<<(ans!=INT_MIN?ans:0)<<endl;

    }

    return 0;
}