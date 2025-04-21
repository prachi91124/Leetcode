class Solution {
    public int numRabbits(int[] answers) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i : answers){
            map.put(i,map.getOrDefault(i,0)+1);
        }

        int cr = 0;
        for(Map.Entry<Integer,Integer> e: map.entrySet()){
            int val = e.getValue();
            int key = e.getKey();
            int gsize = (int)Math.ceil((double)val/(key+1)); //use typecasting here to get ceil value of decimal value andd then converting ceil value to integer value
            cr = cr+ gsize*(key+1);
        }
        return cr;
    }
}