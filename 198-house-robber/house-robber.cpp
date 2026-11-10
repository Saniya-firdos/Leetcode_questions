class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(0,nums,dp);
    }
    int helper(int i,vector<int>& nums,vector<int>& dp){
        if(i>= nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int lootega=nums[i]+helper(i+2,nums,dp);
        int nhilootega=helper(i+1,nums,dp);
        int ans=max(lootega,nhilootega);
        
        return dp[i]=ans;
    }
}; 


