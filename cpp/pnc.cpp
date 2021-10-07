#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pnc2() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> ans;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (ans.empty() || ans[0] > temp)
            {
                ans.push_front(temp);
            }
            else
            {
                ans.push_back(temp);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}


int main()
{   
    pnc2();
    return 0;
}


// const long long mod = 1e9 + 7;
// void pnc1() {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         long long n, ans;
//         ans = 1;
//         cin >> n;
//         n = n*2;
//         for (int i = 3; i <= n; i++)
//         {
//             ans = (ans*i)%mod;
//         }
//         cout << ans << endl;
        
//     }
// }