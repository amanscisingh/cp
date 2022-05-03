#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        ll n; cin>>n;
        ll dp[22147483649];
        memset(dp,0,sizeof(dp));
        dp[1]=1;
        for (int i=1; i<=31; i++) {
            ll temp = pow(2,i);
            dp[temp] = 1;
        }

        ll fact=1;
        for (int i=2; i<=12; i++) {
            fact*=i;
            dp[fact] = 1;
        }

        int cnt=0;
        ll t = (n+1)/2;
        while (t>0) {
            if (dp[t]==1) {
                cnt++;
                n-=t;
            } else {
                t--;
            }   
        }

        cout<<cnt<<endl;


	}
	return 0;	
}