class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digit = 0;
        int ans = 0;
        
        for(int num : nums){
            digit = 0;           
            
            while(num){
                num /= 10;
                digit++;
            }
            
            if(digit % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};