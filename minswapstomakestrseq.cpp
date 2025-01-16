class Solution
{
public:
    int minimumSwap(string s1, string s2)
    {
        int swap = 0;
        int cx = 0;
        int cy = 0;
        int temp = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'x' && s2[i] == 'y')
            {
                cx++;
            }
            else if (s2[i] == 'y' && s1[i] == 'x')
            {
                cy++;
            }
        }
        int swaps = (cx / 2) + (cy / 2);
        if (cx % 2 == 0 && cy % 2 == 0)
        {
            return swap;
        }
        if ((cx + cy) % 2 == 0)
        {
            return swap + 2;
        }

        return -1;
    }
};