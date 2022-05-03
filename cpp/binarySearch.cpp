#include <bits/stdc++.h>
using namespace std;

int indexOfrotatedArray(vector<int> &arr) {
	int n=arr.size();
	int l=0, r=n-1;
	while (l<=r) {
		int m=l+(r-l)/2;
        // cout<<m<<" ";

		if (arr[(m-1+n)%n] >= arr[m] && arr[m] <= arr[(m+1)%n]) {
			return m;
		} else if(arr[l] <= arr[(l+1)%n] && arr[l] <= arr[(l-1+n)%n]) { // ele at l index is the ans
            return l;
        } else if(arr[l]<=arr[m]) {
			l=m+1;
		} else if(arr[m]<=arr[r]) {
			r=m-1;
		}
	}

	return -1;
}

int main() {
	// Your code goes here;
	vector<int> arr = {5,6,7,1,2,3,4};
	// vector<int> arr2 = {4,5,6,7,0,1,2};
	vector<int> arr2 = {3,1};
	cout<<indexOfrotatedArray(arr)<<endl;
	cout<<indexOfrotatedArray(arr2);

	return 0;
}