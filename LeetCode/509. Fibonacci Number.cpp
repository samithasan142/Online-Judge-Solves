/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        } 
        return fib(n - 1) + fib(n - 2);
    }
};

/*
int main() {
    Solution solution;

    int n = 10;
    cout << "Fibonacci series up to " << n << ":\n";
    for (int i = 0; i <= n; i++) {
        cout << solution.fib(i) << " ";
    }

    return 0;
}
*/
