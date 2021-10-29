#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
        int arr[n][m];
        int maxnegative=10000,cnt=0, f=0,sum=0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
                if (arr[i][j] < 0) cnt+=1;
                if (arr[i][j] == 0) f=1;
                maxnegative = min(maxnegative, abs(arr[i][j]));
                sum += abs(arr[i][j]);
            }
            
        }
        if (f==1) cout<<sum<<endl;
        else if (cnt % 2  == 1) cout<<sum-(2*maxnegative)<<endl;
        else cout<<sum<<endl;
        
	}
	return 0;	
}