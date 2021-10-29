#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    bool ans = true;
    if (x == 0 || x == 1) return false;
    if(x==2 || x==3) return true;

    if ( x%2 ==0 || x%3==0) return false;

    for (int i = 5; i*i <= x; i=i+6)
    {
        if (x%i == 0 || x % (i+2) == 0) ans = false;
    }

    return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d ;cin>>d;
        int temp = 1+d, p1=0, p2=0 ;

        while (true)
        {
            if (isPrime(temp)) {
                p1 = temp;
                break;
            };
            temp++;
        }
        temp += d;
        
        while (true)
        {
            if (isPrime(temp)) {
                p2 = temp;
                break;
            }
            temp++;
        }
        

        cout<<p1*p2<<endl;
    }

    return 0;
}