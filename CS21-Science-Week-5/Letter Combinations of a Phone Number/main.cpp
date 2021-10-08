class Solution {
public:
    void dfs(string digits, int index, vector<string>&res, string &s,
            map<char, vector<char>>&nums){
        if(index == digits.size()){
            if(s.size() != 0) res.push_back(s);
            return ;
        }
        for(int i = 0; i < nums[digits[index]].size(); i++){
            s.push_back(nums[digits[index]][i]);
            dfs(digits, index + 1, res, s, nums);
            s.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>> nums
        {
            {'2', {'a', 'b', 'c'}},
            {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}},
            {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}},
            {'9', {'w', 'x', 'y', 'z'}}
        };
        vector<string> res;
        string s;
        dfs(digits, 0, res, s, nums);
        return res;
    }
};
