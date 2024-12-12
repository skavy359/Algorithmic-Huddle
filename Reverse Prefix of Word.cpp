class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        string ans = "";
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        for (int i = index; i >= 0; i--) {
            ans += word[i];
        }
        for (int i = index + 1; i < word.length(); i++) {
            ans += word[i];
        }
        return ans;
    }
};
