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

ll arr[1000000]={0};
void seive(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
            arr[j]=1;
        }
    }
}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}


int main() {
    int t; cin>>t;

    rep(i,0,t) {
        ll k; cin>>k;
        double rt = sqrt(k);
        if(floor(rt) == rt) {
            if (isPrime(rt)) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}