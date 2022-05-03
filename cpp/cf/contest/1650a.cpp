#include<bits/stdc++.h>
using namespace std;

bool check(string s, char c) {
    int n = s.size();

    for (int i=0; i<n; i++) {
        if (s[i] == c && i%2==0 && (n-1-i)%2==0 ) {
            return true;
        }
    }

    return false;
    
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
        char c;
        cin>>s;
        cin>>c;
        int n = s.length();
        if (check(s, c) == true) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

	}
	return 0;	
}