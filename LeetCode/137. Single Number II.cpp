/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]] == 1){
                return nums[i];
            }
        }
        return 0;
    }
};

/*
int main() {
    Solution sol;
    vector<int> nums = {0,1,0,1,0,1,99};
    int single = sol.singleNumber(nums);
    cout << "The single number is: " << single << endl;
    return 0;
}
*/
