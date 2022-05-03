#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        long long int mh, ma, hh, ha, k, a, h;
        cin>>hh>>ha>>mh>>ma>>k>>a>>h;
        int t=0;
        long long int hs=(hh%ma==0?hh/ma:hh/ma+1);
        long long int ms=(mh%ha==0?mh/ha:mh/ha+1);
        if(hs>=ms) {
            cout<<"YES"<<endl;
        } else {
            string ans = "NO";
            while (t<=k) {
                hs = ((hh + t*h)%ma==0?(hh + t*h)/ma:(hh + t*h)/ma+1);
                ms = (mh%(ha + (k-t)*a)==0?mh/(ha + (k-t)*a):mh/(ha + (k-t)*a)+1);
                if(hs>=ms) {
                    ans="YES";
                    break;
                }
                t++;
            }
            cout<<ans<<endl;
        }


        

    }

    return 0;
}