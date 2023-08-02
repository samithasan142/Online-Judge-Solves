/*
#include<bits/stdc++.h>
using namespace std;
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        }
        return false;
    }
};

/*
int main() {
    Solution sol;
    string str1 = "anagram";
    string str2 = "nagaram";

    if (sol.isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
*/
