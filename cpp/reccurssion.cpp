#include<bits/stdc++.h>
using namespace std;

void subSetSum(vector<int> &inp, vector<int> &ans, int s, int sum) {
	// base case...
	if (s==inp.size()) {
		ans.push_back(sum);
		cout<<sum<<endl;
		return;
	}

	// recur to cover all cases...
	subSetSum(inp, ans, s+1, sum+inp[s]);
	subSetSum(inp, ans, s+1, sum);
}


void helper(int n, vector<int> &arr, set<vector<int>> &ans, int s, vector<int> &temp) {
    if (s==n) {
        sort(temp.begin(), temp.end());
        ans.insert(temp);
        return;
    }
    
    helper(n, arr, ans, s+1, temp);
    temp.push_back(arr[s]);
    helper(n, arr, ans, s+1, temp);
	temp.pop_back();
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    set<vector<int>> s;
    vector<int> temp;
    helper(n, arr, s, 0, temp);
    vector<vector<int>> ans;
    for (auto v:s) {
        ans.push_back(v);
    }
    return ans;
}

bool sortbylength(vector<int> v1, vector<int> v2) {
	return v1.size() < v2.size() ;
}



void combinationHelper(int n, vector<int> &arr, set<vector<int>> &ans, int s, vector<int> &temp, int sum, int target) {
	if (sum > target) {
		return;
	}
	if (sum==target) {
		cout<<sum<<endl;
		sort(temp.begin(), temp.end());
		ans.insert(temp);
		return;
	}
    if (s==n) {
		// if (sum==target) {
		// 	cout<<sum<<endl;
        // 	sort(temp.begin(), temp.end());
        // 	ans.insert(temp);
		// }
        return;
    }
    
	// if (sum+arr[s] <= target) {
	// 	temp.push_back(arr[s]);
	// 	combinationHelper(n, arr, ans, s, temp, sum+arr[s], target);	
	// 	temp.pop_back();
	// }

    combinationHelper(n, arr, ans, s+1, temp, sum, target);
    temp.push_back(arr[s]);
    combinationHelper(n, arr, ans, s+1, temp, sum+arr[s], target);
	temp.pop_back();
	sum-=arr[s];
}

vector<vector<int>> combinationSum(vector<int> &arr, int target) {
	set<vector<int>> s;
    vector<int> temp;
    combinationHelper(arr.size(), arr, s, 0, temp, 0, target);
    vector<vector<int>> ans;
    for (auto v:s) {
        ans.push_back(v);
    }
    return ans;

}

void helper(set<char> &inp, string s, vector<string> &ans) {
	if (inp.size() == 0) {
		cout<<s<<endl;
		ans.push_back(s);
		return;
	}
	
	for (int i=0; i<inp.size(); i++) {
		cout<<inp.size()<<" "<<s<<"<-"<<endl;
		auto it = inp.begin();
		for (int j=0; j<i; j++) {
			it++;
		}
		char t = *it;
		inp.erase(it);
		
		helper(inp, s+t, ans);
		inp.insert(t);
	}

	return;
}

string getPermutation(int n, int k) {
	set<char> inp;
	vector<string> ans;
	for (int i=1; i<=n; i++) {
		inp.insert('0'+i);
	}
	helper(inp, "", ans);
	return ans[k-1];
}

int main()
{
	// int t;
	// cin>>t;
	// while(t--)
	// {
		
	// }

	string c = getPermutation(3,3);
	cout<<c<<endl;


	// cout<<"shambhoo"<<endl;
	// vector<int> inp = {2,5,2,1,2};
	// vector<vector<int>> ans = combinationSum(inp, 5);
	// cout<<"size of ans array is "<<ans.size()<<endl;
	// sort(ans.begin(), ans.end(), sortbylength);
	// for (auto a:ans) {
	// 	for (auto i:a) {
	// 		cout<<i<<" ";
	// 	}
	// 	cout<<endl;
	// }


	// set<vector<int>> s;
	// cout<<s.size()<<endl;
	// s.insert({3,5,7});
	// cout<<s.size()<<endl;
	// s.insert({1,2,3});
	// cout<<s.size()<<endl;
	// s.insert({3,5,7});
	// cout<<s.size()<<endl;



	return 0;	
}