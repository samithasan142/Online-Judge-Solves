class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            result = result ^ nums[i];
        }
        return result;
    }
};
            /*
            	XOR Gate
            	A^A=0
            	A^B^A=B
            	(A^A^B) = (B^A^A) = (A^B^A) = B

            	when we do XOR operation between same number then result get 0.
            	And when we do XOR operation between 0 and number then result get number itself.

            	for example:
            	array: 1 2 1 2 3 2 => 1^1 = 0 and 2^2^2 = 0 => 0 0 3 => 3

            	so, result is 3.
            */