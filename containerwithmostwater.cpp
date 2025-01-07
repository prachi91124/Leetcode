class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxar = 0;
        int left = 0;
        int right = height.size() - 1;
        // Took two variables"left" and "right" with great difference so as to
        // consider all areas.
        while (left < right)
        {

            int area = 0;
            // AS area= length*breadth, therefore
            int length = min(height[left], height[right]);
            int diff = right - left;
            int breadth = diff;
            area = length * breadth;
            maxar = max(maxar, area);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxar;
    }
};