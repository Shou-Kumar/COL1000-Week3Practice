#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d = 0;
        int numEmpty = 0;
        d += numBottles;
        numEmpty += numBottles;
        numBottles = 0;
        while(numEmpty >= numExchange){
            numBottles +=  (numEmpty/numExchange);
            numEmpty = numEmpty%numExchange ;
            d += numBottles;
            numEmpty += numBottles;
            numBottles = 0;
        }
        return d;
    }
};

int main(){
    int a, b; cin >> a; cin >> b;
    Solution sol;
    cout << sol.numWaterBottles(a, b) << endl;
}