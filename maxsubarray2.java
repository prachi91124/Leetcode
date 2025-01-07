class Solution {
    public int maxSubArray(int[] nums) {
        // Let's initialize a 1D DP array to store subarray sum
        int[] dp = new int[nums.length];
        Arrays.fill(dp, -1);

        dp[0] = nums[0];
        int maxsum = dp[0];

        for (int i = 1; i < nums.length; i++) {
            dp[i] = Math.max(nums[i], dp[i - 1] + nums[i]);
            maxsum = Math.max(maxsum, dp[i]);
        }

        return maxsum;
    }
}