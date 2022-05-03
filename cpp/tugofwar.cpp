#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;cin>>s;
    int  n=s.size();
    unordered_map<char, int> hm;
    for(int i=0; i<n; i++) {
        if(hm.find(s[i]) != hm.end()) {
            hm[s[i]]++;
        } else {
            hm[s[i]] = 1;
        }
    }
    
    long long int mly=1;
    auto it1=hm.begin();
    int nhm=hm.size();
    long long int temp;
    while (it1 != hm.end()) {
        // cout<<it1->first<<"-"<<it1->second<<endl;
        long long int t=1;
        auto it2=next(it1,1);
        while (it2 != hm.end()) {
            t*= abs(it1->first-it2->first);
            it2++;

        }
        temp = (it1->second * t) % 998244353;
        mly *= (it1->second * t) % 998244353;
        // cout<<mly<<"--";
        it1++;
    }

    cout<<mly/temp;
    return 0;
 
}