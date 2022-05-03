#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        set<int> s;
        string b = "NO";
        for (int i = 0; i < n; i++)
        {
            int t; cin>>t;
            if (s.count(t) == 1)
            {
                b = "YES";
            }

            s.insert(t);
            
        }
        cout<<b<<endl;
        

    }
    return 0;
}