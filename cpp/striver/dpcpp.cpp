#include <bits/stdc++.h>
using namespace std;

vector<int> v = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
int inf = 2147483647;
unordered_map<int, int> mp;


int findMinimumCoins(int a) 
{
    // Write your code here
    if (a<0) {
        return inf;
    }
    if (a==0) {
        return 0;
    }
    if (mp.find(a) != mp.end()) {
        return mp[a];
    }
    
    int d;
    for (int c:v) {
        d = min(d, findMinimumCoins(a-c)+1);
    }
    return mp[a] = d;
}


void sumOfAllSubset(vector<int> arr, int n, vector<int> ans, int s, int sum) {
    if (s == n) {
        ans.push_back(sum);
        return;
      }
      //element is picked
      sumOfAllSubset(arr, n, ans, s+1,  sum + arr[s]);
      //element is not picked
      sumOfAllSubset(arr, n, ans, s+1, sum);
}


int main() {
    vector<int> a = {5,2,1};
    vector<int> ans;
    sumOfAllSubset(a, 3, ans, 0, 0);
    
    cout<<ans.size()<<endl;
    for(int s:ans) {
        cout<<s<<endl;
    }
    return 0;
}