class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])){
                left++;
            }   
            while (left < right && !isalnum(s[right])){
                right--;
            }    
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }   
            left++;
            right--;
        }
        return true;
    }
};

/*
The function isalnum() is used to check that the character is alphanumeric or not. It returns non-zero value, if the character is alphanumeric means letter or number otherwise, returns zero.
*/