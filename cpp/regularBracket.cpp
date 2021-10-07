#include <iostream>
#include <string>
using namespace std;


int main() {
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // print here
        for (int i=0; i<n; i++)
        {
            string a ,b ,c;
            for (int j=0; j<i; j++)
            {
                a += "()";
            }
            for (int j=0; j<n-i; j++)
            {
                b += "(";
                c += ")";
            }

            cout << a << b << c << endl;
        
        }
    }
    


    return 0;
}