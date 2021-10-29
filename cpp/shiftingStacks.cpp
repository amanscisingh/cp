#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n, temp;cin>>n;
        int a[n];
        long long sum=0, need=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag=true;
        for (int i = 0; i<n; ++i)
        {
            need += i;
            sum+=a[i];
            if (sum < need)
            {
                flag = false;
                break;
            }
            
        }

        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
        
	}
	return 0;	
}