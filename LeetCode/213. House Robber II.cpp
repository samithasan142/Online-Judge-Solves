class Solution {
public:
    int helper(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i=2; i<nums.size(); i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        return dp.back();
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        else if(nums.size() == 2) return max(nums[0], nums[1]);

        vector<int> nums1(nums.begin()+1, nums.end());
        vector<int> nums2(nums.begin(), nums.end()-1);

        return max(helper(nums1), helper(nums2));
    }
};
