class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> data;
        for(int x=0; x<nums.size(); x++){
            data.insert(nums[x]);
        }
        int i=1;
        while(i<=nums.size()){
            if(data.find(i) != data.end()){
                i++;
            }else{
                return i;
            }
        }
        return i;
    }
};