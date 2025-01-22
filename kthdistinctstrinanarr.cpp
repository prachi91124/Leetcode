class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> umap;
        vector<string> nondup;
        for (const auto &item : arr)
        {
            umap[item]++;
        }
        for (const auto &item : arr)
        {
            if (umap[item] == 1)
            {
                nondup.push_back(item);
            }
        }
        if (k - 1 < nondup.size())
        {
            return nondup[k - 1];
        }
        else
        {
            return "";
        }
    }
};