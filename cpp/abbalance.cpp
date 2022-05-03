#include <bits/stdc++.h>
using namespace std;

int countAB(string s){
    int cnt = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
       if (s[i] == 'a' && s[i+1]=='b') {
           cnt+=1;
       }
    }

    return cnt;
    
}

int countBA(string s){
    int cnt = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
       if (s[i] == 'b' && s[i+1]=='a') {
           cnt+=1;
       }
    }

    return cnt;
    
}

int main() {
    int t;cin>>t;
    while (t--) {
        string s;cin>>s;
        int n = s.length();
        string a="";
        int cab = countAB(s);
        int cba = countBA(s);
        if (n>1) {
            char c=s[0];
            a += s.substr(0, n-1);
            a += c;
        } else a = s;
        

        cout<<a<<endl;
        

    }
    return 0;
}