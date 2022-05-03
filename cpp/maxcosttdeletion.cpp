#include <bits/stdc++.h>
using namespace std;

vector<int> countTillEmpty(string s) {
    int mx=0;
    int j=0, aj=0;
    int cnt=1;
    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i+1] == s[i])
        {
            cnt++;
            j=i;
        } else {
            
            if(cnt>mx) {
                mx = cnt;
                aj = j;
            }
            cnt=1;
        }
        
    }
    if(cnt>mx) {
        mx = cnt;
        aj = j;
    }

    vector<int> ans;
    ans.push_back(j);
    ans.push_back(mx);
    return ans;

}

// int main() {
//     // vector<int> ans = countTillEmpty("111101");
//     // cout<<ans[0]<<"-"<<ans[1]<<endl;

//     string s = "amansingh";
//     cout<<s.substr(5);

//     return 0;
// }

int main() {
    int t;cin>>t;
    while (t--) {
        int n,a,b;cin>>n>>a>>b;
        string s;cin>>s;
        int t = s.length();
        int ans = 0;
        vector<int> arr;
        if (a>0) {
            while (s.length() > 0) {
                arr = countTillEmpty(s);
                ans += a*arr[1] + b;
                // string change
                int j = arr[0]+1;
                int i = j-(arr[1]-1);
                s = s.substr(0, i) + s.substr(j+1);
                cout<<"---"<<i<<"-"<<j<<"-"<<arr[1]<<"--"<<s<<endl;
            }
        } else {
            ans += (a+b)*t;
        }

        cout<<ans<<endl;

    }
    return 0;
}