class Solution {
public:
    int minimumMoves(string s) {
        int i = 0, ans = 0;
        while (i < s.length()) {
            if (s[i] == 'X') {
                ans++;
                i += 3;
            } else {
                i++;
            }
        }
        return ans;
    }
};
