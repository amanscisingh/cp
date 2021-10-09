#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        string enemy, gregor;
        cin>>enemy>>gregor;
        bool v[n] = {false};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (gregor[i] == '1')
            {
                if (enemy[i] == '0')
                {
                    ans+=1;
                    
                } else {
                    // check for adjacent 1
                    if ( i-1>=0 && v[i-1]==false && enemy[i-1] == '1')
                    {
                        ans +=1 ;
                        v[i-1] = true;
                    } else if (i+1<n && v[i+1]==false && enemy[i+1] == '1') {
                        ans +=1 ;
                        v[i+1] = true;
                    }
                    
                }
                
            }
            
        }

        cout<<ans<<endl;
        




	}
	return 0;	
}