class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        map<char, int> m1;
        map<char, int> m2;

        for (char c : s)
        {
            m1[c]++;
        }

        for (char c : t)
        {
            m2[c]++;
        }

        if (m1 == m2)
        {
            return true;
        }
        return false;
    }
};