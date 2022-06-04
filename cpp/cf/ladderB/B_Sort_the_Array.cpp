#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;

void print(vi &arr) {
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int n; cin>>n; int arr[n];
    rep(i,0,n) cin>>arr[i];
    int s=1;
    int e=n;

    int i=0;
    while(i<n && arr[i] == s) {
        s++;
        i++;
    }
    // if(s>n) {
    //     cout
    // }

    int j=n-1;
    while (j>=0 && arr[j] == e) {
        e--;
        j--;
    }
    
    while (i<=j && arr[j-1] == arr[j] + 1) {
        j--;
    }

    if(i>=j) {
        cout<<"yes";
        if (i==j) {
            cout<<endl<<s<<" "<<e;
        } else {
            cout<<endl<<arr[0]<<" "<<arr[0];
        }
    } else {
        cout<<"no";
    }




    return 0;
}