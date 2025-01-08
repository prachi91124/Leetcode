class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<int> idx;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
            {
                idx.push_back(i);
            }
        }

        int n = idx.size();
        for (int i = 0; i < n / 2; i++)
        {
            int leftIdx = idx[i];
            int rightIdx = idx[n - 1 - i];
            swap(s[leftIdx], s[rightIdx]); // Swap vowels
        }
        return s;
    }
};