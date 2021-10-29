#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long A,B,n, damage=0;cin>>A>>B>>n;
        int attackArr[n], healthArr[n];
        for (int i = 0; i < n; i++) cin>>attackArr[i];
        for (int i = 0; i < n; i++) cin>>healthArr[i];

        bool flag = false;
        for (int i = 0; i < n; i++)
            damage += (healthArr[i]+A-1)/A*attackArr[i];
        
        for (int i = 0; i < n; i++)
        {
            // adjusting health and powers...            
            if (B - (damage - attackArr[i]) > 0) {
                flag = true;
                break;
            }
        }

        
        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
        
	}
	return 0;	
}