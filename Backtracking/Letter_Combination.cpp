// leetcode 17. Letter Combinations of a Phone Number
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int, string> M = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
        vector<string> ans;
        string str = "";
        if(digits.size() != 0)
            helper(ans, M, str, digits, 0);
        return ans;
    }
    
    void helper(vector<string>& ans, unordered_map<int, string>& M, string& str, string& digits, int i){
        if(i == digits.size()){
            ans.push_back(str);
            return;
        }
        
        for(char c: M.find(digits[i] - '0')->second){
            str += c;
            helper(ans, M, str, digits, i + 1);
            str.pop_back();
        }
        
    }
};