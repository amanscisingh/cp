#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;

    while (t--)
    {
        string n;
        cin >> n;

        int z=0, o=0, grp=0;
        bool flag = true;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '0') {
                z++;
                if(flag) grp++;
                flag = false;

            }
            else {
                o++;
                flag = true;
            }
        }

        int MEX;
        if (z == 0) MEX = 0;
        else if (o == 0) MEX = 1;
        else if (grp == 1) MEX = 1;
        else MEX = 2;

        cout << MEX << endl;
    

    }
    return 0;
}