class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        string result;
        result.reserve(n + m); 
        
        int i = 0, j = 0;
        while (i < n || j < m) {
            if (i < n) result += word1[i++];
            if (j < m) result += word2[j++];
        }
        
        return result;
    }
};