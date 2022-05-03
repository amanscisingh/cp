#include <bits/stdc++.h>
using namespace std;


int merge(vector<long long int>& nums, vector<long long int>& temp, int l, int m, int r){
    int i=l, j=m, k=l, inv=0;
        
    for (int x=l; x<=m-1; x++) {
        // j=m;
        while (j<=r && nums[x] > (long long int) 2*nums[j]) {
            j++;
        }
        inv += (j-m); // alll cases covered cuz j-m will covering the missing elements u cared for...
    }
    
    j=m;
    while (i<=(m-1) && j<=r){
        if(nums[i]<=nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }
    
    while (i<=(m-1)) temp[k++] = nums[i++];
    while (j<=r) temp[k++] = nums[j++];
    for (int i=l; i<=r; i++) {
        nums[i]=temp[i];
    }
    temp.clear();
    return inv;      
}


int divide(vector<long long int>& nums, vector<long long int>& temp, int l, int r) {
    int inv=0, m=(l+r)/2;
    if (l<r) {
        inv+= divide(nums, temp, l, m);
        inv+= divide(nums, temp, m+1, r);
        inv += merge(nums, temp, l, m+1, r);
    }
    return inv;
}


int reversePairs(vector<long long int>& nums) {
    int n=nums.size();
    vector<long long int> temp(n);
    int ans = divide(nums, temp, 0, n-1);
    return ans;
}

int main() {
    vector<long long int> nums = {2147483647,2147483647,-2147483647,-2147483647,-2147483647,2147483647};
    int ans = reversePairs(nums);
    cout<<ans<<endl;
    return 0;
}