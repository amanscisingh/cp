#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;

    while (t--)
    {
        int n, sum;
        cin >> n >> sum;

        int m = n / 2 + 1;
        cout << sum / m << endl;
    }
    

}