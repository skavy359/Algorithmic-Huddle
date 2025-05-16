class Solution {
public:
    string reverse(string a) {
        string ans = "";
        for (int i = a.length() - 1; i >= 0; i--) {
            ans += a[i];
        }
        return ans;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[i] == reverse(words[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};
