class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        
        while(n > 0){
            int d = n%10;
            sum = sum + d;
            product = product * d;
            n /= 10;
        }
        
        return product - sum;
    }
};