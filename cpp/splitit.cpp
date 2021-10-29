#include<bits/stdc++.h>
using namespace std;

bool checkRevWrong(int n, string s) {
    string temp = "";
    for (int i = n-1; i >= 0; i--)
    {
        temp += s[i];
    }
    if (s == temp) {
        return true;
    }
    else return false;    
}

//as checking palindrome by excluding ak+1...

bool checkRev(int k, int n, string s) { 
    bool temp = true;
    for (int i = 0; i < k; ++i)
    {
        if (s[i] != s[n - i - 1])
        {
            temp = false;
            break;
        }
        
    }
    
    return temp;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        string s;
        cin>>n>>k>>s;

        if (k == 0) {
            cout<<"YES"<<endl;
        } else {
            if (checkRev(k, n, s) && 2*k < n )
            {
                cout<<"YES"<<endl;                
            } else cout<<"NO"<<endl;
            
        }
        

	}
	return 0;	
}