/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                start = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                end = i;
                break;
            }
        }
        return {start, end};
    }
};

/*
int main() {
    Solution sol;

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);

    cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
*/
