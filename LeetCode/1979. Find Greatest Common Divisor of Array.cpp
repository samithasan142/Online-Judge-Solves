class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans=1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=1; i<=nums[n-1]; i++){
            if(nums[0]%i == 0 && nums[n-1]%i == 0){
                ans=i;
            }
        }
        return ans;
    }
};