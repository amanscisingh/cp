#include<bits/stdc++.h>
using namespace std;

bool canBeAllocated(vector<int> &arr, int m, int c){
    int temp=1;
    int l=0;
    int r=1;
    while(r<arr.size()) {
        if(arr[r] - arr[l] < m) {
            r++;
        } else {
            temp++;
            l=r;
            r++;
        }
    }
    // cout<<(temp>=c)<<endl;

    return temp>=c;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c; cin>>n>>c;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int l=1; 
        int h=arr[n-1]-arr[0];
        while (l<=h) {
            int m=l+(h-l)/2;
            // cout<<l<<"-"<<m<<"-"<<h<<endl;
            if(canBeAllocated(arr, m, c)) {
                l=m+1;
            } else {
                h=m-1;
            }
        }

        return h;

        


        
	}
	return 0;	
}