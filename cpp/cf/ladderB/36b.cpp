#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;
pair<int,int> loc;


double dis(int x)
{
    long double ans = sqrt(((ll)loc.first - x)*((ll)loc.first - x) + ((ll)loc.second)*((ll)loc.second));
    return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    std::cin>>n;
    double vb,vs;
    std::cin>>vb>>vs;

    std::vector<double> v(n,0);
    for( int i =0;i<n;i++){
        std::cin>>v[i];
    }

    
    std::cin>>loc.first;
    std::cin>>loc.second;

    double time = 0;
    double mini = INT_MAX;
    int ind = -1;
    std::vector<int> ans;

    for( int i = 1;i<n;i++)
    {
        double time1 = v[i]/(double)vb;
        double time2 = dis(v[i])/vs;

        

        if(time1 + time2 <= mini){
            ind = i+1;
            ans.push_back(ind);
            mini = time1 + time2;

        }
    }

    mini = INT_MAX;
    for( int i = 0;i<ans.size();i++)
    {
        int temp = std::abs(v[ans[i]-1] - loc.first);
        if(temp < mini)
        {
            mini = temp;
            ind = ans[i];
        }
    }

    std::cout<<ind;

	return 0;	
}