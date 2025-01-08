class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (n == 0)
            {
                return true;
            }
            if (i == 0)
            {
                if (flowerbed.size() > 1)
                {
                    if (flowerbed[i] == 0 && flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if (flowerbed[i] == 0)
                {
                    return true;
                }
            }
            else if (i == flowerbed.size() - 1)
            {
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0)
                    {
                        return true;
                    }
                }
            }
            else
            {
                if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 &&
                    flowerbed[i - 1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return false;
    }
};