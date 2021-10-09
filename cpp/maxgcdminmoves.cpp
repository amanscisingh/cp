#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b; cin>>a>>b;
        long long g = abs(a-b), c1;
        if (g==0)
        {
            cout<<0<<" "<<0<<endl;
        } else {
            c1=max(a,b)%g;
            cout<<g<<" "<<min(c1, g-c1)<<endl;
        }
        
        
        
	}
	return 0;	
}