class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> smap = new HashMap<>();

        int count = 0;
        int sum = 0;
        smap.put(0, 1);

        for (int num : nums) {
            sum += num;

            if (smap.containsKey(sum - k)) {
                count += smap.get(sum - k);
            }

            smap.put(sum, smap.getOrDefault(sum, 0) + 1);
        }

        return count;
    }
}