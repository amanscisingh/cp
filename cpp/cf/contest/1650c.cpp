#include<bits/stdc++.h>
using namespace std;

// int maxWt(int i, int j, int t, int& c[], int &w[]){
//     if(t==0) return 0;

//     if(i>j) return 0;

//     int ans = INT_MIN;





// }

bool cmp(pair<pair<int ,int> ,int> a, pair<pair<int ,int> ,int> b) {
    return a.second < b.second;
}

bool cmp2(pair<pair<int ,int> ,int> a, pair<pair<int ,int> ,int> b) {
    return a.first.first < b.first.first;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n; cin>>k>>n;
        vector<pair<pair<int, int> ,int>> v;
        for (int i=0; i<n; i++) {
            int a,b;cin>>a>>b;
            v.push_back({{a, i+1 },b});
        }

        sort(v.begin(), v.end(), cmp);
        for (int i=0; i<(n- 2*k ); i++) {
            v.pop_back();
        }

        int sum=0;
        for (pair<pair<int ,int>,int> p: v) {
            sum+=p.second;
        }

        sort(v.begin(), v.end(), cmp2);
        // cout<<"------------"<<endl;
        int i=0, j=v.size()-1;
        cout<<sum<<endl;
        for (int i=0; i<k; i++) {
            cout<<(v[i].first.second)<<" "<<(v[2*k -1 - i].first.second)<<endl;
            
        }


	}
	return 0;	
}