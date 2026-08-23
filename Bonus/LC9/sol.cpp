#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindromeSlow(int x) {
            string sx = to_string(x);
            //cout << sx << endl;
            int l = sx.length();
            for(int i = 0; i < l/2; i++){
                //cout << sx[i] << " and " << sx[l-i-1] << endl;
                cout << i << " and " << l-i-1 << endl;
                if(sx[i] != sx[l-i-1]){
                    return false;
                }
            }
            return true;
        }
        bool isPalindrome(int x) {
            bool ans = false;
            long long n = x;
            long long rev = 0;
            if (n < 0) {
                return ans;
            }
            while(n >= 1){
                rev = (rev*10) + n%10;
                n/=10;
            }
            return (x == rev) ;
        }
};

int main(){
    int a; cin >> a;
    Solution sol;

    cout << sol.isPalindrome(a) << endl;
}