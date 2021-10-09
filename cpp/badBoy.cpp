#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n, m, i, j, MIN, c, a[4]; cin>>n>>m>>i>>j;
        // top = i; left=j; bottom = n-i; right = m-j;
        // a[0] = 1; a[1] = j; a[2] = n-1; a[3] = m-j;
        // MIN = 1000000000000;
        // for (int i=0; i<4; i++) {
        //     if (a[i] < MIN)
        //     {
        //         MIN = a[i];
        //         c=i;
        //     }
        // }
        // if(c==0){
        //     cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        // }
        
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
	}
	return 0;	
}