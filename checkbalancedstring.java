class Solution {
    public boolean isBalanced(String num) {
        int evesum = 0, oddsum = 0;

        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 0) {
                evesum = evesum + (num.charAt(i) - '0');
            } else {
                oddsum = oddsum + (num.charAt(i) - '0');
            }
        }
        if (evesum == oddsum) {
            return true;
        }
        return false;
    }
}