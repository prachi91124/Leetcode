class Solution
{
public:
    bool isCircularSentence(string sentence)
    {
        if (sentence[0] != sentence[sentence.size() - 1])
        {
            return false;
        }

        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
            {
                int lastch = sentence[i - 1];
                int firstch = sentence[i + 1];

                if (lastch != firstch)
                {
                    return false;
                }
            }
        }

        return true;
    }
};