#include <iostream>
#include <string>
using namespace std;

// string recur(string s) {
//     // check for AB or BC

// }


int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int A=0,B=0,C=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                A++;
            else if (s[i] == 'B')
                B++;
            else
                C++;
            
        }
        if (B == (A+C))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}