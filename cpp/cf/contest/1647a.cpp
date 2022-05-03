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
    int t; cin>>t;
    rep(i, 0, t) {
        int n; cin>>n;
        if (n==1) {
            cout<<1<<endl;
        } else if (n==2) {
            cout<<2<<endl;
        } else {
            int k = n/3;
            int one=k, two=k;
            if (n% (k*3) == 1) {
                one++;
                string s="";
                rep(i, 0, two) {
                    s+="12";
                }
                s+="1";
                cout<<s<<endl;

            } else if(n% (k*3) == 2) {
                two++;
                string s="";
                rep(i, 0, one) {
                    s+="21";
                }
                s+="2";
                cout<<s<<endl;


            } else {
                // one == two
                string s="";
                rep(i, 0, one) {
                    s+="21";
                }
                cout<<s<<endl;


            }



        }


    }
	
	return 0;	
}