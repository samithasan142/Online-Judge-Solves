class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product1, product2;
        sort(nums.begin(), nums.end());
        int n = nums.size();
              
        product1 = nums[n-1] * nums[n-2] * nums[n-3];
        product2 = nums[n-1] * nums[0] * nums[1];
        return max(product1, product2);
    }
};