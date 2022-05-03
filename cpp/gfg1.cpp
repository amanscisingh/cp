// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void recur(vector<string> &ans, vector<vector<int>> &m, vector<vector<int>> &flag, vector<pair<string,pair<int,int>>> &dir, int i, int j, int n, string s) {
        if (i==n-1 && j==n-1 && s.size()==n*2-2 && m[i][j] == 1) {
            ans.push_back(s);
            // cout<<"-"+s<<(s.size()==n*2-2)<<endl;
            return ;
        }

        if (m[i][j] == 1 && flag[i][j] == 0) {
            flag[i][j] = 1;
            for (pair <string,pair<int,int>> p : dir) {
                // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
                int x = i + p.second.first;
                int y = j + p.second.second;
                if (x>=0 && x<n && y>=0 && y<n) {
                    // cout<<p.first<<endl;
                    recur(ans, m, flag, dir, x, y, n, s+p.first);
                }
            }
            flag[i][j] = 0;
        }

        return ;
        
    }

    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<pair<string,pair<int,int>>> dir = { {"D",{1,0}}, {"L",{0,-1}}, {"R", {0,1}}, {"U",{-1, 0}} };
        vector<string> ans;
        vector<vector<int>> flag(n, vector<int>(n,0));
        recur(ans, m, flag, dir, 0, 0, n, "");
           
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends