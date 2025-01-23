class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        vector<int> presum(nums.size() + 1, 0);
        int count = 0;
        presum[0] = 0;

        for (int i = 1; i <= nums.size(); i++)
        {
            presum[i] = presum[i - 1] + nums[i - 1];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j <= nums.size(); j++)
            {
                if (presum[j] - presum[i] == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};