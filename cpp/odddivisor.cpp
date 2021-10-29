#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;cin>>n;
        if (n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            double t = log2(n);
            long long a = t;
            if (a == t)
            {
                cout<<"NO"<<endl;
            } else cout<<"YES"<<endl;
            
        }
        
	}
	return 0;	
}