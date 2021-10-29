#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y, k = 0, ans=0; 
        cin>>x>>y;
        int xcopy = x;
        while (x<y)
        {
            x*=10;
        };

        x/=10;

        while (x >= xcopy)
        {
            int temp = y/x;
            ans += temp;
            y = y- temp*x;
            x/=10;
        };

        ans += y;
        

        cout<<ans<<endl;
        
        
	}
	return 0;
}