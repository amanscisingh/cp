#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;cin>>n;
    int mx=INT_MIN;
    for(int i=0; i<n; i++) {
        int c; cin>>c;
        if(mx<=c) mx=c;
    }

    cout<<mx*mx<<endl;

        
	return 0;	
}