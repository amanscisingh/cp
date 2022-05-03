// 5998. Maximum Split of Positive Even Integers
// You are given an integer finalSum. Split it into a sum of a maximum number of unique positive even integers.

// Return a list of integers that represent a valid split containing a maximum number of integers. 
// If no valid split exists for finalSum, return an empty list. You may return the integers in any order.

// Input: finalSum = 12
// Output: [2,4,6]

// Input: finalSum = 28
// Output: [6,8,2,12]

#include <bits/stdc++.h>
using namespace std;


    vector<long long> maximumEvenSplit(long long finalSum) {
        if (finalSum % 2 != 0) return {};
        if (finalSum == 2) return {2};
        // vector<vector<long long>> dp(finalSum+1);
        // dp[2] = {2};
        // dp[4] = {4};
        vector<long long> v1 = {4};
        vector<long long> v2 = {};

        for(int i = 6; i <= finalSum; i += 2) {
            // dp[i] = copy of dp[i-2];
            v2 = v1;
            int toChange = v1[v1.size()-1];
            bool flag=true;
            for(int j=v1.size()-2; j>=0; j--) {
                // cout<<toChange<<" "<<v1[j]<<endl;
                if (toChange-2 == v1[j]) {
                    toChange -= 2;
                } else {
                    v1[j] += 2;
                    flag = false;
                    break;
                }
            }
            if (flag) {
                if (v1[0] != 2) {
                    v1.push_back(2);
                    sort(v1.begin(), v1.end());
                } else {
                    v1[v1.size()-1] += 2;
                }
            } 
        }


        return v1;
    }


int main() {
    long long finalSum = 3722146;
    vector<long long> res = maximumEvenSplit(finalSum);
    for(auto i: res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}