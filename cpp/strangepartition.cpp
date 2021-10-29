#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x; cin>>n>>x;
        long long temp, a[n], sum=0, MIN, MAX=0;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;            
            sum+=temp;
            if (temp%x == 0)
            {
                MAX+=temp/x;
            } else MAX += temp/x + 1;
            
            a[i] = temp;
        }

        if (sum % x ==0)
        {
            MIN = sum/x;
        } else MIN = sum/x + 1;
        
        cout<<MIN<<" "<<MAX<<endl;
        
	}
	return 0;	
}