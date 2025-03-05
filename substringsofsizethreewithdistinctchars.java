class Solution {
    public int countGoodSubstrings(String s) {
        int count = 0;
        for (int i = 0; i < s.length() - 2; i++) {
            int j = i + 1;
            if (s.charAt(j) != s.charAt(i) && s.charAt(j + 1) != s.charAt(i) && s.charAt(j + 1) != s.charAt(j)) {
                count++;
            }
        }
        return count;
    }
}