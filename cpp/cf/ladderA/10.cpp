#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;



int main()
{   
    int n; cin>>n;
    if (n%2==1) {
        cout<<(-1)<<endl;
    } else {
        int arr[n];
        rep(i, 0, n) {
            arr[i] = i+1;
        }

        for(int i=0;i<n-1;i+=2) {
            swap(arr[i], arr[i+1]);
        }

        rep(i,0,n) {
            cout<<arr[i]<<" ";
        }
    }
	
	return 0;	
}