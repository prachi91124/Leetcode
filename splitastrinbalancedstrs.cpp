class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int ss = 0;
        int right = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                right++;
            }
            else if (s[i] == 'L')
            {
                left++;
            }

            if (left == right)
            {
                ss++;
                left = 0;
                right = 0;
            }
        }
        return ss;
    }
};