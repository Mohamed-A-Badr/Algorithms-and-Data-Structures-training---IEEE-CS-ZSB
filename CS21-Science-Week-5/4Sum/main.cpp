class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> temp;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int x = target - nums[i] - nums[j];
                int l = j + 1, r = nums.size() - 1;
                while(l < r){
                    int sum = nums[l] + nums[r];
                    if(sum == x){
                        temp.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    }
                    else if(sum > x) r--;
                    else l++;
                }
            }
        }
        for(auto it : temp)
            res.push_back(it);
        return res;
    }
};
