#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string s;cin>>s;
        map <char, char> mp;
        int cA=0, cB=0, cC=0;
        if (s[0] == s[s.length()-1])
        {
            cout<<"NO"<<endl;
        } else {
            mp.insert(pair <char, char> (s[0], '('));
            mp.insert(pair <char, char> (s[s.length()-1], ')'));
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'A') cA+=1;
                else if(s[i] =='B') cB += 1;
                else cC+=1;

                if (s[i] == mp.find(s[0]))
                {
                    /* code */
                }
                
                
            }
            
        }
        
	}
	return 0;	
}