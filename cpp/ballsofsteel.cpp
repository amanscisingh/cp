#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
        int arr[n][2];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j][0]>>arr[j][1];
        }
        int flag = -1;
        // int cnt=0;
        
        for (int i = 0; i < n; ++i)
        {
            int temp=0;
            for (int j = 0; j < n; ++j)
            {
                int dist = abs(arr[j][0]-arr[i][0]) + abs(arr[j][1]-arr[i][1]);
                temp = max(temp, dist);
            }
            
            if (temp<=k) flag = 1;
        }
        

        cout<<flag<<endl;
        // cout<<flag<<endl;
	}
	return 0;	
}