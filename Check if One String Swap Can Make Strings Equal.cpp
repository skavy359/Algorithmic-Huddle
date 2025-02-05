class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;
        int a = -1, b = -1;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                count++;
                if (a == -1)
                    a = i;
                else if (b == -1)
                    b = i;
            }
        }
        if (count == 0)
            return true;
        else if (count == 2 && s1[a] == s2[b] && s1[b] == s2[a])
            return true;
        return false;
    }
};