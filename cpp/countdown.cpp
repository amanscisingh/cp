#include <iostream>
#include <string>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        string k;
        cin>>n;
        cin>>k;
        int zeros = 0, sum = 0;
        for (int i = 0; i < n; i++){
            sum += k[i] - 48;
            if (k[i] == '0') zeros++;
        }
        int noZeros = n-zeros;

        // cout << sum << "-" << zeros << "-" << k[n-1] << endl;
        if (zeros == 0) {
            cout << sum + n - 1 << endl;
        } else if(k[n-1] == '0') {
            cout << sum + noZeros << endl;
        } else {
            cout << sum + noZeros - 1 << endl;
        }
    }
    return 0;
}
      