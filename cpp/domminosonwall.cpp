#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k1, k2, w, b;
        cin>>n>>k1>>k2>>w>>b;

        int wmax, bmax, diff;
        diff = abs(k1-k2);
        wmax = min(k1, k2) + diff/2;
        bmax = n - max(k1, k2) + diff/2;
        if (w<=wmax && b<=bmax) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
	}
	return 0;	
}