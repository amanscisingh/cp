#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int t) {
    t %= n;
    reverse(arr, arr+t);
    reverse(arr + t, arr+n );
    reverse(arr, arr+n);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int ans[n];

        for (int i=n-1; i>=0; i--) {
            int j;
            for(j=0; j<i; j++){
                if(arr[j] == i+1) {
                    break;
                }
            }
            if (j==i) j-=1;
            leftRotate(arr, i+1, j+1);
            ans[i] = j+1;
        }

        for(int i: ans) cout<<i<<" ";
        cout<<endl;


	}
	return 0;	
}