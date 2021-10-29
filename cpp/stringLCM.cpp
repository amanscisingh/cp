#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;cin>>s>>t;
        int sn, tn, LCM;
        sn = s.length(), tn = t.length();
        LCM = (sn*tn) / (__gcd(sn, tn));
        int t1=LCM/sn,t2=LCM/tn;
        string ans1="", ans2="";
        while (t1--)
        {
            ans1+=s;
        }

        while (t2--)
        {
            ans2+=t;
        }

        if (s==t) cout<<s<<endl;
        else if(ans1 == ans2) cout<<ans1<<endl;
        else cout<<-1<<endl;
        
        

	}
	return 0;	
}