class Solution
{
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower,
                                          vector<int> &colsum)
    {
        int col = colsum.size();
        vector<vector<int>> mat(2, vector<int>(col));
        int totalsum = accumulate(colsum.begin(), colsum.end(), 0);
        if (totalsum != (upper + lower))
        {
            return {};
        }

        int diff = 0;
        for (int i = 0; i < col; i++)
        {
            if (colsum[i] == 2)
            {
                mat[0][i] = 1;
                mat[1][i] = 1;
                upper--;
                lower--;
            }
            else if (colsum[i] == 1)
            {
                if (upper >= lower)
                {
                    mat[0][i] = 1;
                    upper--;
                }
                else
                {
                    mat[1][i] = 1;
                    lower--;
                }
            }
            else if (colsum[i] == 0)
            {
                mat[0][i] = 0;
                mat[1][i] = 0;
            }
        }
        if (lower != 0 || upper != 0)
        {
            return {};
        }
        return mat;
    }
};