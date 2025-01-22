class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int t = 0;

        while (tickets[k] != 0)
        {
            for (int i = 0; i < tickets.size(); i++)
            {
                if (tickets[k] == 0)
                {
                    return t;
                }
                else if (tickets[i] != 0)
                {
                    t++;
                    tickets[i] = tickets[i] - 1;
                }
                else
                {
                    continue;
                }
            }
        }
        return t;
    }
};