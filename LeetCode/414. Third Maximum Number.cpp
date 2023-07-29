class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        vector<int> n(set.begin(), set.end());
        sort(n.begin(), n.end());

        if(n.size() < 3) 
            return n[n.size()-1];
        else return n[n.size()-3];
    }
};