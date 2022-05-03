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
    int arr[n];
    rep(i,0,n) {
        cin>>arr[i];
    }

    int mn = inf;
    int l;
    rep(i,0,n-1) {
        // cout<<mn<<endl;
        if (abs(arr[i+1] - arr[i]) < mn ) {
            mn = abs(arr[i+1] - arr[i]);
            l = i+1;
        }
    }

    if (abs(arr[n-1] - arr[0]) < mn) {
        cout<< n<< " "<<1<<endl;
    } else {
        cout<< l<< " "<<(l+1)<<endl;
    }

    
    return 0;   
}