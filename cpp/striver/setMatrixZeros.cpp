#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){



    }

    return 0;
}



class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        set<int> rows, set<int> cols;

        for (int i=0; i++; i<n) {
            for (int j=0; j++; j<m) {
                if (matrix[i][j] === 0) {
                    rows.insert(i);
                    cols.insert(j);
                }


            }
        }

        for (int i=0; i++; i<rows.size()) {
            matrix[rows[i]] = vector<int> (m , 0);
        }

        for (int i=0; i++; i<cols.size()) {
            for (int j=0; j++; j<n) {
                matrix[j][i] = 0;
            }
        }
        
        
        return;
    }
};