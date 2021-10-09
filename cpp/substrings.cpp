#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while( t-- ){
        int n;
        string s, ans="";
        bool flag = true;
        cin >> n >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='L') ans+="L" ;
            else if (s[i]=='R') ans += "R";
            else if (s[i] == 'U') ans += "D";
            else if (s[i] == 'D') ans += "U";
           
        }
        cout << ans << endl;
        
    }
    return 0;

}