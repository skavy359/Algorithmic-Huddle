class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            ans += s[i];
            if (s[i] == ' ') {
                count++;
            }
            if (count == k) {
                break;
            }
        }
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};
