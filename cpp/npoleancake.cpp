#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;cin>>n;

        int temp=0, ind, ans[n] = {0}; // space O(n)

        for (int i = 0; i < n; i++)
        {
            cin>>ans[i];
        }

        for (int i = n-1; i >= 0; i--)
        {
            temp = max(temp, ans[i]);
            if (temp>0)
            {
                ans[i] = 1;
                temp -= 1;
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;
        
        
	}
	return 0;	
}