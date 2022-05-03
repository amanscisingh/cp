#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        multiset <int> s;
        for (int j = 1; j <= n; j++)
        {
            s.insert(j);
        }
        
        cout<<2<<endl;
        for (int i = 0; i < n-1; i++)
        {
            auto end = s.end();
            end--;
            int a = *end;
            s.erase(end);
            end = s.end();
            end--;
            int b = *end;
            s.erase(end);
            s.insert((a+b+1)/2);

            cout<<a<<' '<<b<<endl;

        }
        
    }

    // cout<<(4/2);



    return 0;
}