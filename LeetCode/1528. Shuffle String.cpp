class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        for(int i=0; i<s.length(); i++){
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};

/*
    s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"

               0 1 2 3 4 5 6 7
    s       = "c o d e l e e t",
    indices = [4,5,6,7,0,2,1,3]

    ans[indices[0]] = s[0] ; ans[4] = c
    ans[indices[1]] = s[1] ; ans[5] = o
    ans[indices[2]] = s[2] ; ans[6] = d
    ans[indices[3]] = s[3] ; ans[7] = e
    ans[indices[4]] = s[4] ; ans[0] = l
    ans[indices[5]] = s[5] ; ans[2] = e
    ans[indices[6]] = s[6] ; ans[1] = e
    ans[indices[7]] = s[7] ; ans[3] = t

Output: "leetcode"
*/
