#include<bits/stdc++.h>
using namespace std;

int main()
{
	int z;
	cin>>z;
	while(z--)
	{
		int n,t;cin>>n>>t;
        string s; cin>>s;
        while(t--)
        {
            int i,j;cin>>i>>j;
            if (s.find(s[i-1]) < i-1 || s.rfind(s[j-1]) > j-1)
            {
                cout<<"YES"<<endl;
            } else cout<<"NO"<<endl;
            
        }
	}
	return 0;	
}