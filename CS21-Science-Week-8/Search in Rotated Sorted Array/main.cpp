class Solution {
public:
    int search(vector<int>& nums, int target) {
      int l = 0, r = nums.size() - 1;
      while(l <= r){
        int mid = l + (r  - l) / 2;
        if(target == nums[mid])
          return mid;
        if(target > nums[mid]){
          if(nums[r] < target && nums[mid] <= nums[r])
            r = mid - 1;
          else 
            l = mid + 1;
        }
        if(target < nums[mid]){
          if(nums[l] > target && nums[mid] >= nums[l])
            l = mid + 1;
          else 
            r = mid - 1;
        }
      }
      return -1;
    }
};
