#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        cout << log2(n) << endl;
        cout << floor(log2(n)) << endl;
        if (n < 1) return false;
        return (floor(log2(n)) - log2(n) == 0);
    }
};

int main(){
    int a; cin >> a;
    Solution sol;

    cout << sol.isPowerOfTwo(a)<< endl;
}