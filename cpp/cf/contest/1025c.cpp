#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,l,k;
    cin>>n>>l>>k;
    int d[n], s[n];
    for(int i=0; i<<n; i++) cin>>d[i];
    for(int i=0; i<<n; i++) cin>>s[i]; 

    int dp[n+1][k+1];
    memset(dp, INT_MAX, sizeof(dp));
    dp[0][0] = 0;
    for (int i=1; i<=n; i++) {
        dp[i][0] = dp[i-1][0] + s[i-1] * d[i-1] - d[i-2];
    }


		
	
	return 0;	
}