class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int diff = 0;
        int minprice = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minprice)
            {
                minprice = prices[i];
            }
            else
            {
                diff = max(diff, prices[i] - minprice);
            }
        }

        return diff;
    }
};