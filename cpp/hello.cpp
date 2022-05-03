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

double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double ans = pow(m, 1.0/n);
    cout<<setprecision(7);
    return ans;
}

int main() {
    // string s;
    // cin>>s;
    // int n; cout<<"Enter a number whose all factors you want :"; cin>>n;

    // for (int i = 1; i*i <= n; i++)
    // {
    //     if (n%i == 0) {
    //         if (i == n/i) cout<<i<<", ";
    //         else cout<<i<<", "<<n/i<<", ";
    //     }
    // }
    // cout<<endl;
    
    // cout<<findNthRootOfM(3, 9)<<endl;
    // bool a = (1 <= -1 && -1 <=6);

    // vector<pair<string,pair<int,int>>> dir = { {"D",{1,0}}, {"L",{0,-1}}, {"R", {0,1}}, {"U",{-1, 0}} };
    
    char a[] = "ams";
    a[1]='g';
    cout<<a     ;

    // for (pair <string,pair<int,int>> p : dir) {
    //     cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    // }
}


int strtoint(string s) {
    int a=0;
    int t=1;
    int n=s.size()-1;
    while(n>=0) {
        a = a + (s[n] - '0')*t;
        t*=10;
        n--;
    }

    return a;
}

int main() {
    // cout<<stoi("50");
    cout<<strtoint("050043");
    // cout<<true;
    // multiset<string> s = {"a",  "c", "boy", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    // auto t = s.find("boy");
    // t--;
    // cout<<"the searched result is '"<<*t<<"'"<<endl;
    
    // int n[4] = {1,2,3,4};
    // // slice n from 0 to 2 index
    // int  t=n[1];
    // cout<<t[-1]<<endl;
    // unordered_map<int, int> m;
    // m[1] = 1;
    // m[2] = 4;
    // m[3] = 9;
    // auto x = m.find(4);
    // cout<<(*x).first<<endl;

    // set<int> v = {2,3,4};
    // auto it=v.begin();
    // it++; it++; it++;
    // cout<<*(it)<<endl;
    // v.erase(it);
    // it++;
    // it++;
    // if(it==v.end()){
    //     cout<<"yayyy"<<endl;
    //      it=v.begin();
    // }
    // cout<<*(it)<<"-"<<v.size()<<endl;
    // it++;

    vector<string> s = {"45"};
    // convert s[0] to int
    int n = stoi(s[0]);
    // cout type of s[0]
    // cout<<'9'-'0';
    return 0;

}


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


// unordered_map<int, int> mp;
// mp.find(target - nums[i]) != mp.end()
