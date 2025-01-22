class Solution
{
public:
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size(), 0);
        string vowels = "aeiouAEIOU";
        vector<int> helper(words.size() + 1, 0);
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            if (vowels.find(word[0]) != string::npos && vowels.find(word[word.size() - 1]) != string::npos)
            {
                helper[i + 1] = helper[i] + 1;
            }
            else
            {
                helper[i + 1] = helper[i];
            }
        }

        for (int i = 0; i < queries.size(); i++)
        {
            int start = queries[i][0];
            int end = queries[i][1];
            ans[i] = helper[end + 1] - helper[start];
        }
        return ans;
    }
};