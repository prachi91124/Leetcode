class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> smap;
        smap[0] = 1;
        int sum = 0;
        int count = 0;

        for (int num : nums)
        {
            sum += num;
            if (smap.find(sum - k) != smap.end())
            {
                count += smap[sum - k];
            }
            smap[sum]++;
        }

        return count;
    }
};