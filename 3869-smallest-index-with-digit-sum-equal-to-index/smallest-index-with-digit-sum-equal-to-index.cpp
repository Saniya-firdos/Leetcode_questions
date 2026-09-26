class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0 ; i<nums.size();i++){
            int sum = helper(nums[i]);
            if(sum == i){
                return i;
            }
        
            
        }
        return -1;
      
    }
    
    int helper(int n ){
        if(n==0) return 0;
        return n%10 + helper(n/10);
    }
};