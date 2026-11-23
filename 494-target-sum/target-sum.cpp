class Solution {
public:
      int helper(vector<int> & nums, int i, int sum , int target){
        if(i==nums.size()){
            if(sum==target)
                return 1;
                return 0;
            
        }
        int plus = helper(nums, i+1, sum+nums[i],target);
        int minus = helper(nums, i+1, sum-nums[i],target);
       
       return plus + minus;
      }
    int findTargetSumWays(vector<int>& nums, int target) {
        return  helper(nums, 0, 0,target);
        
    }
};