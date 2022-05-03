#include <bits/stdc++.h>

using namespace std;

int countOneInBit(int n) { // log n
    int cnt=0;
    while(n){
        cnt+=n&1;
        n=n>>1;
    }
    
    return cnt;
}

int main() {



    return 0;
}