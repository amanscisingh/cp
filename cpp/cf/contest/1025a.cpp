#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,l;cin>>n>>l;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int ans = 0;
        for(int i=0; i<l; i++) {
            int x=0, y=0;
            int t = 1<<i;
            for(int n:arr) {
                if(n&t) x++;
                else y++;
            }

            if (x>y) ans += 1<<i;
        }

        cout<<ans<<endl;
	}
	return 0;	
}