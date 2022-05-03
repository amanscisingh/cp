// https://leetcode.com/problems/search-a-2d-matrix/submissions/   runtime error c++ submissions
// https://leetcode.com/problems/powx-n/submissions/
#include <bits/stdc++.h>
using namespace std;

int divide(vector<int>& nums, vector<int>& temp, int l, int r) {
    int inv=0, m=(l+r)/2;
    if (l<r) {
        inv+= divide(nums, temp, l, m);
        inv+= divide(nums, temp, m+1, r);
        inv += merge(nums, temp, l, m+1, r);
    }
    return inv;
}


int merge(vector<int>& nums, vector<int>& temp, int l, int m, int r){
    int i=l, j=m, k=l, inv=0;
    while (i<=(m-1) && j<=r){
        if(nums[i]<=nums[j]) {
            temp[k++] = nums[i++];
        } else if(nums[i] > 2*nums[j]){
            temp[k++] = nums[j++];
            inv += (m-i);
        } else {
            temp[k++] = nums[j++];
        }
    }
    
    while (i<=(m-1)) temp[k++] = nums[i++];
    while (j<=r) temp[k++] = nums[j++];
    for (int i=l; i<=r; i++) {
        nums[i]=temp[i];
    }
    return inv;      
}
    

int reversePairs(vector<int>& nums) {
    int n=nums.size();
    vector<int> temp(n);
    int ans = divide(nums, temp, 0, n-1);
    return ans;
}

int main() {
    vector<int> nums = {1,3,2,3,1};
    int ans = reversePairs(nums);
    cout<<ans<<endl;
    return 0;
}