// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}


// User function template for C++

int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int N;
    N=(n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
       N=N-array[i];
    }
    return N;
}
