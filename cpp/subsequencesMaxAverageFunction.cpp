#include <bits/stdc++.h>
using namespace std;
long long negativeINf = -10000000000;


int main() {
    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long  temp, MAX=negativeINf, sum=0;
        cin>>n;
        int lst[n];
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            lst[i] = temp;
            sum += temp;
            if(temp > MAX) MAX = temp;
        }

        cout <<MAX + 1.0*(sum-MAX)/(n-1)<<endl;
        
        

    }   

    return 0;

}