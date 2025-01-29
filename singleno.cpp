class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> map;

        for (int n : nums)
        {
            map[n]++;
        }

        for (auto pair : map)
        {
            int v = pair.first;
            int s = pair.second;
            if (s == 1)
            {
                return v;
            }
        }
        return -1;
    }
};