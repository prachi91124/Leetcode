class Solution {
    public int singleNumber(int[] nums) {
        HashMap <Integer,Integer> map= new HashMap<>();

        for(int i : nums){
            map.put(i,map.getOrDefault(i,0)+1);
        }

        for(Map.Entry<Integer,Integer> entry:map.entrySet()){
            int k = entry.getKey();
            int v = entry.getValue();

            if(v == 1){
                return k;
            }
        }
        return -1;
    }
}