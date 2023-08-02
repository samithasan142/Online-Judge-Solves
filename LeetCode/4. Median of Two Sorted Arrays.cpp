/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        double mid = n/2;

        if(n%2 != 0){
            return nums1[mid];
        }else{
            return (nums1[mid-1] + nums1[mid]) / 2.0;
        }
    }
};

/*
int main() {
    Solution sol;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;
    return 0;
}
*/
