class Solution {
    public int subarraySum(int[] nums, int k) {
        int presum[] = new int[nums.length + 1];
        presum[0] = 0;
        int count = 0;
        for (int i = 1; i <= nums.length; i++) {
            presum[i] = presum[i - 1] + nums[i - 1];
        }
        for (int j = 0; j < nums.length; j++) {
            for (int x = j + 1; x <= nums.length; x++) {
                if (presum[x] - presum[j] == k) {
                    count++;
                }
            }
        }

        return count;
    }
}