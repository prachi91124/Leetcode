class Solution {
    public int maxSubArray(int[] nums) {
        // let us suppose that maxsum is nums[0]
        int maxSum = nums[0];
        //let's take a variabel total that will store sum and we can compare
        int totalSum = 0;

        for(int n: nums){
            if(totalSum < 0){
                totalSum = 0;
            }
            totalSum += n;
            maxSum = Math.max(totalSum, maxSum);
        }

        return maxSum;
    }
}