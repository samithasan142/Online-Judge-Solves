class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0, leftSum = 0, rightSum = 0, result = 0;
        vector<int> answer;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        rightSum = sum;

        for(int i=0; i<nums.size(); i++){
            rightSum -= nums[i];
            if(i>=1){
                leftSum += nums[i-1];
            }
            result = abs(leftSum-rightSum);
            answer.push_back(result);
        }
        return answer;
    }
};
