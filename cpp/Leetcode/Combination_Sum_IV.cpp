class Solution {
public:
    // coin change permutation
    int combinationSum4(vector<int>& nums, int target) {
        vector<long> dp(target+1, 0);
        
        dp[0] = 1;
        
        sort(nums.begin(), nums.end());
        
        for(int i=1; i <= target; i++){
            for(int num : nums){
                if(i-num >= 0){
                    dp[i] += dp[i-num];
                }
                if(dp[i] > INT_MAX) break;
            }
        }
        
        return dp[target];
    }
};
