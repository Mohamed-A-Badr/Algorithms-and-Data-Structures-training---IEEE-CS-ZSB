class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> res;
      sort(intervals.begin(), intervals.end());
      int st = intervals[0][0], en = intervals[0][1];
      for(int i = 1; i < intervals.size(); i++){
        if(intervals[i][0] > en){
          res.push_back({st, en});
          st = intervals[i][0];
          en = intervals[i][1];
        }
        else if(intervals[i][0] <= en)
          en = max(en, intervals[i][1]);
      }
      res.push_back({st, en});
      return res;
    }
};
