class Solution
{
public:
    bool isBalanced(string num)
    {
        int evesum = 0;
        int oddsum = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)
            {
                evesum = evesum + (num[i] - '0');
            }
            else
            {
                oddsum = oddsum + (num[i] - '0');
            }
        }
        if (evesum == oddsum)
        {
            return true;
        }
        return false;
    }
};