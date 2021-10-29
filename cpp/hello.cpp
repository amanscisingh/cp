// #include <string>
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n) { 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main() {
    // string s;
    // cin>>s;
    int n; cout<<"Enter a number whose all factors you want :"; cin>>n;

    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0) {
            if (i == n/i) cout<<i<<", ";
            else cout<<i<<", "<<n/i<<", ";
        }
    }
    cout<<endl;
    

    // cout<<"The string u entered is: "<<s<<endl;
    // int t;
    // cin >>t;

    // while (t--)
    // {
    //     string n;
    //     cin >> n;
    // }
    // float x=10.3445f;
	
	// cout<<fixed<<setprecision(9)<<x<<endl;
	// cout<<fixed<<setprecision(2)<<x<<endl;
	// cout<<fixed<<setprecision(3)<<x<<endl;
	// cout<<fixed<<setprecision(0)<<x<<endl;

    return 0;

}


// using namespace std;
// const long long mod = 1e9 + 7;


int square(int x) {
    return x*x;
}


// int main()
// {   
    // int a=45;
    // int *ptra;
    // ptra = &a;
    
    // cout << "a ki value = " << a << endl;
    // cout << "a ka address nikalna = " << &a << endl;
    // cout << "a ka address = " << ptra << endl;
    // cout << "a ki value using prta = " << *ptra << endl;
    // vector<string> vv(2, string(2, '='));
    // vector<vector<int>> v(2, vector<int>(2, 3));
    // cout << v[0][0] << endl;
    // cout << v[1][1] << endl;
    // cout << v[1][0] << endl;
    // cout << v[0][1] << endl;
//     cout << "Hello babyyy" << endl;
//     return 0;
// }

   


// short, int, long, long long, float, double, char, bool, void
// no index out of range error, nothing happens instead
// POINTERS 
// to get address use &
// to get value use *
// 
// CLASSES
// Private: can be accessed only within the class, to use it outside use void functions 
// Public: variables can be accessed from outside the class
// for constructor create a method using same name
// 
// INHERITENCE


// ARRAY vs VECTOR
// array is fixed size you gota declare size initially 
// vector is dynamic... size can be incremented...
// 2D vectors
// vector<string> vv(2, string(2, '='));
// vector<vector<int>> v(2, vector<int>(2, 3));

// STRING "aman" vs char 'a' 
// only + and - can be used
// here strings can't be multiplied to inceament it..