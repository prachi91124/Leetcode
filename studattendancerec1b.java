class Solution {
    public boolean checkRecord(String s) {
        int ca = 0;
        for (char c : s.toCharArray()) {
            if (c == 'A') {
                ca++;
            }
        }

        if (s.contains("LLL")) {
            return false;
        }
        if (ca > 1) {
            return false;
        }
        return true;
    }
}