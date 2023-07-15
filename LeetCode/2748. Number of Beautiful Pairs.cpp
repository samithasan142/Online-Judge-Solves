class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0, firstDigit, lastDigit;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int x = nums[i];

                while(x > 0){
                    firstDigit = x % 10;
                    x = x / 10;
                }
                
                lastDigit = nums[j] % 10;

                if(__gcd(firstDigit, lastDigit) == 1){
                    count++;
                }
            }
        }
        return count;
    }  
};