class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]] == 1){
                return nums[i];
                break;
            }
        }
        return 0;
    }
};