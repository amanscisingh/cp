// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
#include <bits/stdc++.h>

using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n+1,0);
    for(int i=1;i<=n;i++){
        ans[i]=ans[i>>1]+i%2;
    }
    return ans;
}

int longestOnes(vector<int>& nums, int k) {
    // sliding window
    int n = nums.size();
    int i=0;
    int j=i;
    
    int mx=INT_MIN;
    while (i<n) {
        if(nums[i] == 1) {
            
            j=i+1;
            while(j<n && nums[j]==1) {
                // cout<<"O"<<j;
                j++;
            }
            int tf=j-1;
            int tb=i;
            int tk=k;
            
            while ( tf<n-1 && ((tk>0 && nums[tf+1]==0 )|| nums[tf+1]==1 )) {
                if (tk>0 && nums[tf+1]==0) {
                    tf++;
                    tk--;
                }
                
                if (nums[tf+1]==1) {
                    tf++;
                }
                    
            }
            cout<<i<<tb<<endl;
            while ( tb>0 && ((tk>0 && nums[tb-1]==0) ||  nums[tb-1]==1)) {
                if(tk>0 && nums[tb-1]==0) {
                    tb--;
                    tk--;    
                }
                
                if(nums[tb-1]==1) {
                    tb--;
                }
                cout<<tb<<"-";
                
            }
    
            
            cout<<endl<<tb<<"-"<<tf<<endl;
            mx = max(mx, tf-tb+1);
            
            i=j+1;
        } else {
            i++;
        }
        
    }
    return mx==`INT_MIN?k:mx;
    
}


int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
        
    if (n==0) {
        return 0;
    }

    int mx=0;
    
    deque<int> dq;
    for(int i=0; i<n; i++) {
        if (nums[i]==0){
            i++;
        } else {
            // 1 found, now expand the window
            int j=i+1;
            while(nums[j]==1) j++;

        int tk=tk;
        while ( j<n && ((tk>0 && nums[j]==0 )|| nums[j+1]==1 )) {
            if (tk>0 && nums[j]==0) {
                j++;
                tk--;
                dq.push_back(tk);
            } else {
                j++;
            }
                
        }

        mx=max(mx, j-i);

        while(j<n) {
            if(nums[j] == 0 && dq.size()>0) {
                int ti=dq.front();
                dq.pop_front();
                j++;
                mx = max(mx, j-ti);
            } else {
                break;
            }

            }
        }


        }
    }
    


}

int main() {
    vector<int> inp = {1,1,1,0,0,0,0,0};
    int ans = longestOnes(inp, 6);
    cout<<ans<<endl;

    return 0;
}