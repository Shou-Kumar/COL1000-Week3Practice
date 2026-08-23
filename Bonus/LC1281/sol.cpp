#include <bits/stdc++.h>
using namespace std;


int main(){
    int c; cin >> c;
    int sum = 0;
    int prod = 1;
    while (c>1)
    {
        int d = c%10;
        c = floor(c/10);
        prod*=d;
        sum += d;
    }
    cout << "sum = " << sum << " and prod = " << prod << " and prod - sum = " << prod-sum << endl;
    
}