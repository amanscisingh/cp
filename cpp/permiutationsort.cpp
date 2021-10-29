#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
        int a[n];
        bool isSorted=true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (i+1 != a[i])
            {
                isSorted = false;
            }                      
            
        }

        if (isSorted)
        {
            cout<<0<<endl;
        } else if(n == a[0] && 1 == a[n-1]) {
            cout<<3<<endl;
        } else if (1 == a[0] || n == a[n-1]) {
            cout<<1<<endl;
        } else {
            cout<<2<<endl;
        }
        
        
	}
	return 0;	
}