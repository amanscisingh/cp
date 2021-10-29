#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int s;cin>>s;
        int a = s/2020, b = s%2020;
        (a >= b) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;	
}