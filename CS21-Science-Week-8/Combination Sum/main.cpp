class Solution {
public:
    void solve(vector<vector<int>> &res, vector<int> &arr, int x, int idx, vector<int> &temp){
      if(x == 0){
        res.push_back(temp);
        return;
      }
      if(x < 0) return;
      for(int i = idx; i < arr.size(); i++){
        if(x - arr[i] < 0) return ;
        temp.push_back(arr[i]);
        solve(res, arr, x - arr[i], i, temp);
        temp.pop_back();
      }
    }
  
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> res;
      sort(candidates.begin(), candidates.end());
      vector<int> temp = {};
      solve(res, candidates, target, 0, temp);
      return res;
    }
};
