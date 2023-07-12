class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int>ans;
        int val;
        for(int i=0; i<nums.size(); i++){
            val = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j] < nums[i] && j != i){
                    val++;
                }                    
            }
            ans.push_back(val);
        }
        return ans;
    }
};