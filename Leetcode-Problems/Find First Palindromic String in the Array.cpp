class Solution {
public:
    bool ispalindrome(const string& a) {
        for (int i = 0; i < a.size() / 2; i++) {
            if (a[i] != a[a.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (ispalindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};
