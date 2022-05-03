#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;cin>>n;
        vector<int> arr(n);
        unordered_map<int, vector<int>> temp;
        for(int i=0; i<n; i++) {
            int t;
            cin>>t;
            arr[i] = t;
            if (temp.find(t) != temp.end()) {
                temp[t].push_back(i);

            } else {
                temp[t] = {i};
            }
        }

        int ans = -1;
        for(auto x: temp){
            for(int i=0; i<x.second.size() - 1; i++) { 
                ans = max(ans, x.second[i] + n - x.second[i+1]);
                // cout<<ans<<"-";

            }
        }

        cout<<ans<<endl;
		
	}
	return 0;	
}