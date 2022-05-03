// /Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
using namespace std;

int rotateArr(int ar[], int d, int n) {
    int i, j, k;
    for (i = 0; i < d; i++) {
        int temp = ar[0];
        for (j = 0; j < n - 1; j++) {
            ar[j] = ar[j + 1];
        }
        ar[n - 1] = temp;
    }
    return 0;
}

int main() {
    int t; cin>>t;
    while (t--){



    }

    return 0;
}