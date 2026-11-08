class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        int sum = 0;
        int maxi = INT_MIN;

        for(int i =0;i<nums.size();i++){
             maxi = max(maxi, nums[i]);

                 if(nums[i] > 0 && st.find(nums[i]) == st.end()) {
                sum += nums[i];
                st.insert(nums[i]);
            
            }
       
        } 
        if(sum==0)
           return maxi;
    return sum;
    
    }
};