class Solution {
    public int rob(int[] nums) {
        int[] dp = new int[nums.length + 1];
        Arrays.fill(dp, -1);

        // Base Cases
        if (nums.length == 0) {
            return 0;
        }

        if (nums.length == 1) {
            return nums[0];
        }

        // Recursive Cases
        return recursiveRob(nums.length - 1, nums, dp);
    }

    public int recursiveRob(int i, int[] nums, int[] dp) {
        if (i == 0)
            return nums[0];
        if (i == 1)
            return Math.max(nums[0], nums[1]);

        if (dp[i] != -1)
            return dp[i];

        dp[i] = Math.max(recursiveRob(i - 1, nums, dp), nums[i] + recursiveRob(i - 2, nums, dp));
        return dp[i];
    }
}