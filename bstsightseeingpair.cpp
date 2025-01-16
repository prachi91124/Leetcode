class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int max_i = values[0];
        int max_score = 0;

        for (int j = 1; j < values.size(); j++)
        {
            int max_j = max_i + values[j] - j;

            max_score = max(max_score, max_j);

            max_i = max(max_i, values[j] + j);
        }

        return max_score;
    }
};