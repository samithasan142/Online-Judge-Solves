class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int leftProduct = 1;
        int rightProduct = 1;
        int ans = nums[0];

        for(int i=0; i<nums.size(); i++){
            if(leftProduct == 0) leftProduct = 1;
            if(rightProduct == 0) rightProduct = 1;

            leftProduct *= nums[i];
            rightProduct *= nums[n-1-i];

            ans = max(ans, max(leftProduct, rightProduct));
        }
        return ans;
    }
};
