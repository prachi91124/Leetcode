class Solution {
    public int maxArea(int[] height) {
        int ar = 0;
        int start = 0;
        int end = height.length - 1;
        int l = 0;
        int b = 0;
        while (start < end) {
            b = end - start;
            if (height[start] > height[end]) {
                l = height[end];
                end--;
            } else if (height[end] > height[start]) {
                l = height[start];
                start++;
            } else {
                l = height[start];
                start++;
                end--;
            }
            ar = Math.max(ar, l * b);
        }
        return ar;
    }
}