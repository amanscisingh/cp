#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int cnt=0;
    while(n) {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int a = 87;
	cout<< (char) ( a+'0' );

	return 0;	
}