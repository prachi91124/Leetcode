class Solution {
    public int lengthOfLongestSubstring(String s) {
        int mxlen = 0;
        for (int i = 0; i < s.length(); i++) {
            HashSet<Character> set = new HashSet<>();
            int length = 0;

            for (int j = i; j < s.length(); j++) {
                if (set.contains(s.charAt(j))) {
                    break;
                }
                set.add(s.charAt(j));
                length++;
            }
            mxlen = Math.max(mxlen, length);
        }
        return mxlen;
    }
}