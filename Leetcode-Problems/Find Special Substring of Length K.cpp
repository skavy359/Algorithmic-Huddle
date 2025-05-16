class Solution {
    public:
        bool hasSpecialSubstring(string s, int k) {
            int n = s.length();
            if (k > n)
                return false;
            for (int i = 0; i <= n - k; i++) {
                char ch = s[i];
                bool ans = true;
                for (int j = i; j < i + k; j++) {
                    if (s[j] != ch) {
                        ans = false;
                        break;
                    }
                }
                if (ans) {
                    bool left = (i == 0 || s[i - 1] != ch);
                    bool right = (i + k == n || s[i + k] != ch);
                    if (left && right) {
                        return true;
                    }
                }
            }
            return false;
        }
    };