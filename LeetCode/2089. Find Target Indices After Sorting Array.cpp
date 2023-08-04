/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                result.push_back(i);
            }
        }
        return result;
    }
};

/*
int main() {
    Solution sol;

    vector<int> nums = {1,2,5,2,3};
    int target = 2;
    vector<int> result = sol.targetIndices(nums, target);

    cout << "Result: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
*/
