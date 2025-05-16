class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int len;
        if (word1.length() < word2.length()) {
            len = word2.length();
        } else {
            len = word1.length();
        }
        for (int i = 0; i < len; i++) {
            if (i < word1.length())
                ans += word1[i];
            if (i < word2.length())
                ans += word2[i];
        }
        return ans;
    }
};
