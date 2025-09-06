class Solution {
public:
    int lcs(string a, string b){
        vector <int> curr ( b.length()+1 , 0 );
        vector <int> next ( b.length()+1 , 0 );

        for(int i = a.length()-1; i >= 0; i--){
            for(int j = b.length()-1; j >= 0; j--){
                int len = 0;
                if(a[i] == b[j]){
                    len = 1 + next[j+1];
                }
                else{
                    len = max(next[j], curr[j+1]);
                }
                curr[j] = len;
            }
            next = curr;
        }
        return next[0];
    }
    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return lcs(s, rev);
    }
};