// Given an array of distinct integers candidates and a target integer target, 
// return a list of all unique combinations of candidates where the chosen numbers sum to target. 
//   You may return the combinations in any order.The same number may be chosen from candidates an unlimited number of times. 

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

// Input: candidates = [2,3,5], target = 8
// Output: [[2,2,2,2],[2,3,3],[3,5]]

// Input: candidates = [2], target = 1
// Output: []

// Input: candidates = [1], target = 1
// Output: [[1]]

// Input: candidates = [1], target = 2
// Output: [[1,1]]

class Solution {
public:
    void solve(vector<vector<int>>  &res, vector<int>v, int sum, int target, vector<int>c, int d)
    {
        if(sum==target)
            res.push_back(v); // if target is equal to sum, add this vector to result.
        if(sum>target)
            return; // if sum is greater than return, no need to again go in loop and use same value i=[d]or values after i=[d].
      for(int i=d;i<c.size();i++)
        {// the loop will always start from value i=d,
            sum+=c[i];
            v.push_back(c[i]);
            solve(res,v,sum,target,c,i); // and at each recursive call i'll send the current index so that we can again use the same value in sum, 
            v.pop_back(); // while coming back there are only two chances either the sum was == taregt or sum > target, hence on coming back we pop the value at i=[d] 
                          // and subtract it from sum. Now the loop continues and i increases, now we will add the value at [i] which is next to d in sum and in coming recursive call 
                          // i'll pass i as d, so that same value can be used and enter in loop from use of next values.
        
        // note we are not using values that are left begind in current recursive call, only current or next values will be used.
            sum-=c[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>>res;
        vector<int>v;
        int sum=0,d=0;
      // d is used to keep the track of varible being added, we can only use the current value at [d] and the values next to [d], but not the values that are before [d].
      // we even can use the same value at [d] multiple times, this is the reason why at each recursive call i'm passing the index d as the starting value for loop.
        solve(res,v,sum,target,candidates,d);
        return res;
    }
};
