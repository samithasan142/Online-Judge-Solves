class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};

/*
Complexity:
Time complexity: O(n*log(n)) for sorting
Space complexity: O(1)
*/

/*
// Solution 2: Max-Heap Approach (Time complexity: O(n*log(k)))
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
            pq.pop();
        return pq.top();
    }
*/
