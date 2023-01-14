class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count_1=0;
        int count_2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0)
                count_1++;
            else if(nums[i]<0) 
                count_2++;
            else continue;
        }
        if(count_1>count_2)
            return count_1;
        else return count_2;
    }
};