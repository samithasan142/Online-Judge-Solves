class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> usedIntegers;

        while (true) {
            int sum = 0;
            while (n != 0) {
                int d = n % 10;
                sum = sum + (d * d);
                n = n / 10;
            }

            // If sum is 1, return true
            if(sum == 1) return true;

            // Else the current sum is the new number
            n = sum;

            // Check if we have already encountered that number
            if(usedIntegers.count(n) != 0){
                return false;
            }
            usedIntegers.insert(n);
        }
    }
};
