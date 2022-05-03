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
    rep(i,0,n) cin>>arr[i];

    int chest=0, biceps=0, back=0;
    for(int i=0; i<((n/3) * 3); i+=3) {
        chest += arr[i];
        biceps += arr[i+1];
        back += arr[i+2];
    }

    if (n%3==1) chest += arr[n-1];
    if (n%3==2) {
        chest += arr[n-2];
        biceps += arr[n-1];
    }

    if (chest>=biceps && chest>=back) {
        cout<<"chest"<<endl;
    } else if (biceps>=chest && biceps>=back) {
        cout<<"biceps"<<endl;
    } else {
        cout<<"back"<<endl;
    }
	
	return 0;	
}