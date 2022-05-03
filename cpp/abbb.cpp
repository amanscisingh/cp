#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        int n = s.length();
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if (ans && s[i]=='B')
            {
                ans--;
            } else ans++;
            
        }

        cout<<ans<<endl;
        
        
        


    }

    return 0;
}