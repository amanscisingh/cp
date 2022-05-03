#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvpi vector<vector<pair<int, int>>>
#define pb push_back
#define rep(i, a, b) for(int i=a; i<b; i++)

int inf = 1e7;



int main()
{
    string s1,s2; cin>>s1>>s2;
    int cnt = 1;
    int n1=s1.size(), n2=s2.size();

    int i=0,j=0;
    while(j<n2)
    {
        if(s1[i]==s2[j])
        {
            // cout<<s1[i]<<" "<<s2[j]<<endl;
            cnt++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }


    cout<<cnt<<endl;


	return 0;	
}