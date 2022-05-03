#include <bits/stdc++.h>
using namespace std;

int isZero(string s, int i) {
    int cnt=0;
    while (i>=0) {
        if(s[i] == '0' || s[i] == '5') break;
        else cnt++;
        i--;
    }
    return cnt;
};

int isFive(string s, int i){
    int cnt=0;
    while(i>=0) {
        if(s[i] == '2' || s[i] == '7') break;
        else cnt++;
        i--;
    }
    return cnt;
}

int main() {
    int t;cin>>t;
    while (t--) {
        long long n;cin>>n;
        string s = to_string(n);
        
        if (s.substr(s.length()-2) == "25" || s.substr(s.length()-2) == "50" ||s.substr(s.length()-2) == "75" || s.substr(s.length()-2) == "00")
        {
            cout<<0<<endl;
        } else {
            int cnt1=0, cnt2=0;
            // check for 5
            int i=s.length()-1;
            while (i>=0) {
                if (s[i] == '5') break;
                i--;
                cnt1++;
            }
            cnt1 += isFive(s, i-1);

            // check for 0
            int j=s.length()-1;
            while (j>=0) {
                if (s[j] == '0') break;
                j--;
                cnt2++;
            }
            cnt2 += isZero(s, j-1);
    
            cout<<min(cnt1, cnt2)<<endl; 
        }
    }
    return 0;
}