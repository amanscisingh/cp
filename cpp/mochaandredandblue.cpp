#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;


void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    queue<ll> q;
    for(int i=0;i<n;i++){
        if(s[i]!='?') q.push(i);
    }
    if(q.size()==0){
        s[0]='B';q.push(0);
    }
    while(!q.empty()){
        auto tp=q.front();q.pop();
        if(tp>0 && s[tp-1]=='?'){
            if(s[tp]=='R') s[tp-1]='B';
            else s[tp-1]='R';
            q.push(tp-1);
        }
         if(tp<n-1 && s[tp+1]=='?'){
            if(s[tp]=='R') s[tp+1]='B';
            else s[tp+1]='R';
            q.push(tp+1);
        }
    }
    cout<<s<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t=1;cin>>t;
while(t--)
{
solve();
}
return 0;
}