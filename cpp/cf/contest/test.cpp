#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int ind, int times) {
    reverse(arr, arr+ind+1);
    reverse(arr, arr+ ind+1 - times );
    reverse(arr+ind+1 - times, arr+ind+1);
}

int main()
{
	int dp[6] = {3, 2, 5, 6, 1, 4};
    leftRotate(dp, 5, 4);

    for(int j: dp){
        cout<<j<<" ";
    }

	return 0;	
}

